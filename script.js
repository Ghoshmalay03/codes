// SECURITY WARNING: Do NOT expose your API key in client-side code in production!
const GEMINI_API_KEY = 'AIzaSyBYW72_jaA6memtNRXVvzIasFwCZZ_civM';
        const GEMINI_API_URL = 'https://generativelanguage.googleapis.com/v1beta/models/gemini-2.0-flash:generateContent';

function updateApiUrl() {
    GEMINI_API_URL = `https://generativelanguage.googleapis.com/v1beta/models/gemini-pro:generateContent?key=${GEMINI_API_KEY}`;
}

// Initial URL setup
updateApiUrl();

document.addEventListener('DOMContentLoaded', () => {
    console.log("DOM Content Loaded - Script execution started.");

    // Get references to the elements based on index.html
    const apiKeyInput = document.getElementById('api-key');
    const totalBudgetInput = document.getElementById('total-budget');
    const setBudgetBtn = document.getElementById('set-budget-btn');
    const getMealsBtn = document.getElementById('get-meals-btn');
    const generateListBtn = document.getElementById('generate-list-btn');
    const getTipsBtn = document.getElementById('get-tips-btn');
    const mealPlanOutput = document.getElementById('meal-plan-output');
    const shoppingListOutput = document.getElementById('shopping-list-output');
    const tipsOutput = document.getElementById('tips-output');
    // Assuming no separate loading indicator, we'll show loading in output divs

    // --- State ---
    let weeklyBudget = null;
    apiKeyInput.value = GEMINI_API_KEY; // Set input field value from loaded key

    // --- Event Listeners ---
    apiKeyInput.addEventListener('change', (event) => {
        GEMINI_API_KEY = event.target.value.trim();
        if (GEMINI_API_KEY) {
            localStorage.setItem('geminiApiKey', GEMINI_API_KEY);
            updateApiUrl(); // Update the URL with the new key
            console.log("API Key updated.");
            getTipsBtn.disabled = false;
            if (weeklyBudget !== null) {
                getMealsBtn.disabled = false;
                generateListBtn.disabled = false;
            }
            apiKeyInput.classList.remove('border-red-500');
        } else {
            localStorage.removeItem('geminiApiKey');
            getMealsBtn.disabled = true;
            generateListBtn.disabled = true;
            getTipsBtn.disabled = true;
            console.log("API Key removed.");
            alert("API Key removed. AI features are disabled.");
            // Optionally clear the URL or handle invalid state
            GEMINI_API_URL = '';
        }
    });

    setBudgetBtn.addEventListener('click', () => {
        const budgetValue = parseInt(totalBudgetInput.value, 10);
        if (!isNaN(budgetValue) && budgetValue > 0) {
            weeklyBudget = budgetValue;
            console.log(`Weekly budget set to: ₹${weeklyBudget}`);
            if (GEMINI_API_KEY) {
                getMealsBtn.disabled = false;
                generateListBtn.disabled = false;
            } else {
                getMealsBtn.disabled = true;
                generateListBtn.disabled = true;
                alert(`Budget set to ₹${weeklyBudget}. Enter API Key to enable AI features.`);
                apiKeyInput.focus();
                return;
            }
            alert(`Budget set to ₹${weeklyBudget}`);
        } else {
            weeklyBudget = null;
            getMealsBtn.disabled = true;
            generateListBtn.disabled = true;
            alert('Please enter a valid positive budget amount.');
            totalBudgetInput.value = '';
            totalBudgetInput.focus();
        }
    });

    getMealsBtn.addEventListener('click', () => handleApiCall('mealPlan'));
    generateListBtn.addEventListener('click', () => handleApiCall('shoppingList'));
    getTipsBtn.addEventListener('click', () => handleApiCall('tips'));


    // --- Core Function --- Refactored for different calls
    async function handleApiCall(type) {
        console.log(`handleApiCall started for type: ${type}`);

        // 1. Validate Inputs (API Key and Budget if needed)
        if (!GEMINI_API_KEY) {
            alert('Please enter your Gemini API Key first.');
            apiKeyInput.classList.add('border-red-500');
            apiKeyInput.focus();
            return;
        }
        apiKeyInput.classList.remove('border-red-500');

        if ((type === 'mealPlan' || type === 'shoppingList') && (weeklyBudget === null || weeklyBudget <= 0)) {
            alert('Please set a valid weekly budget first.');
            totalBudgetInput.focus();
            return;
        }

        // 2. Show Loading & Clear/Prepare Output Area
        let outputElement;
        let loadingMessage;
        switch (type) {
            case 'mealPlan':
                outputElement = mealPlanOutput;
                loadingMessage = 'Generating meal plan...';
                break;
            case 'shoppingList':
                outputElement = shoppingListOutput;
                loadingMessage = 'Generating shopping list...';
                break;
            case 'tips':
                outputElement = tipsOutput;
                loadingMessage = 'Generating tips...';
                break;
            default:
                console.error('Invalid API call type');
                return;
        }

        showLoading(outputElement, loadingMessage);
        // Disable all generate buttons during API call
        setGenerateButtonsState(true);

        // 3. Construct Prompt based on type
        let prompt = '';
        const baseInstruction = `You are an AI assistant helping an Indian user plan their weekly groceries. Focus on budget-friendly options available in India (local markets, D-Mart etc.) and use INR for currency.`;

        switch (type) {
            case 'mealPlan':
                prompt = `${baseInstruction}\n\nUser's Total Weekly Budget: INR ${weeklyBudget}\nUser Preferences/Needs: (Optional - e.g., vegetarian, quick meals)\n\nPlease generate a simple 7-day meal plan (Breakfast, Lunch, Dinner) using common, budget-friendly Indian dishes that fit within the specified budget (INR ${weeklyBudget}). Keep recipes practical for home cooking. Format clearly for each day.`;
                break;
            case 'shoppingList':
                // Try to get meal plan text if available
                const mealPlanContent = mealPlanOutput.querySelector('.formatted-content')?.innerText || null;
                prompt = `${baseInstruction}\n\nUser's Total Weekly Budget: INR ${weeklyBudget}\n`;
                if (mealPlanContent && mealPlanContent.length > 50) {
                    prompt += `\nBased on this Meal Plan:\n${mealPlanContent}\n\n`;
                } else {
                    prompt += `\nUser Preferences/Needs: (Optional - e.g., vegetarian, family size)\n\n`;
                }
                prompt += `Create a detailed grocery shopping list based on the meal plan (if provided) or general needs for a week. Estimate the cost for each item in INR. Sum up the estimated total cost. Format as a list with item, quantity (approx.), and estimated INR cost (e.g., \"- Rice (1kg): ₹60\").`;
                break;
            case 'tips':
                prompt = `${baseInstruction}\n\nUser's Total Weekly Budget: INR ${weeklyBudget || 'Not specified'}\nUser Preferences/Needs: (Optional)\n\nOffer 3-5 practical grocery cost-saving tips relevant to the Indian market and the user's situation. Be specific (e.g., mention seasonal items, store types).`;
                break;
        }

        console.log("Constructed Prompt:", prompt);

        // 4. Call Gemini API
        try {
            const requestBody = {
                contents: [{ parts: [{ text: prompt }] }],
                // Optional: Add generationConfig or safetySettings if needed
                // generationConfig: { temperature: 0.7, maxOutputTokens: 2048 },
                // safetySettings: [ { category: \"...\", threshold: \"...\" } ]
            };

            console.log("Sending request to Gemini API...", GEMINI_API_URL);
            // console.log("Request Body:", JSON.stringify(requestBody, null, 2)); // Log if debugging needed

            // Use the dynamically updated GEMINI_API_URL
            const response = await fetch(GEMINI_API_URL, {
                method: 'POST',
                headers: {
                    'Content-Type': 'application/json'
                },
                body: JSON.stringify(requestBody)
            });

            console.log("API Response Status:", response.status);

            const data = await response.json();
            // console.log("Raw API Response Data:", data); // Log if debugging needed

            if (!response.ok) {
                console.error("API Error Response Data (details):", data);
                // Use backticks for template literal in Error
                throw new Error(`API request failed with status ${response.status}: ${data?.error?.message || 'Unknown API error'}`);
            }

            // 5. Process and Display Response
            if (data.candidates && data.candidates[0]?.content?.parts?.[0]?.text) {
                const generatedText = data.candidates[0].content.parts[0].text;
                console.log("Generated Text from API received.");
                showResult(outputElement, generatedText);
            } else if (data.promptFeedback?.blockReason) {
                const blockReason = data.promptFeedback.blockReason;
                console.error("Prompt blocked by API:", data.promptFeedback);
                // Use backticks for template literal in Error
                throw new Error(`API request blocked. Reason: ${blockReason}. Check API safety settings or modify prompt.`);
            } else {
                console.error("Invalid API response structure (no candidates):", data);
                throw new Error('Received an invalid or empty response structure from the API.');
            }

        } catch (error) {
            console.error(`Error in handleApiCall (${type}):`, error);
            showError(outputElement, error);
        } finally {
            // 6. Hide Loading & Re-enable buttons
            setGenerateButtonsState(false);
            console.log(`handleApiCall (${type}) finished.`);
        }
    }

    // --- UI Helper Functions ---
    function showLoading(element, message = "Loading...") {
        if (!element) return;
        element.classList.remove('hidden');
        element.innerHTML = `<p class="text-gray-500 text-center p-4"><i class="fas fa-spinner fa-spin fa-lg mr-2"></i>${message}</p>`;
    }

    function showResult(element, textContent) {
        if (!element) return;
        element.classList.remove('hidden');
        // Use the existing formatOutput function for basic Markdown to HTML
        element.innerHTML = `<div class="formatted-content prose prose-sm max-w-none text-gray-800 p-4 bg-white border rounded">${formatOutput(textContent)}</div>`;
    }

    function showError(element, error) {
        if (!element) return;
        element.classList.remove('hidden');
        let errorMessage = "An unexpected error occurred. Please try again.";
        if (error instanceof Error) {
            errorMessage = error.message;
        } else if (typeof error === 'string') {
            errorMessage = error;
        }

        // Improve specific error messages
        if (errorMessage.includes("API key not valid") || errorMessage.includes("API_KEY_INVALID") || errorMessage.includes("invalid API key")) {
            errorMessage = "Invalid API Key provided. Please check the key entered above and ensure it's active.";
            apiKeyInput.classList.add('border-red-500');
            apiKeyInput.focus();
        } else if (errorMessage.includes("quota") || errorMessage.includes("RESOURCE_EXHAUSTED")) {
            errorMessage = "API Quota Exceeded. Please check your usage or try again later.";
        } else if (errorMessage.includes("Failed to fetch") || errorMessage.includes("NetworkError")) {
            errorMessage = "Network error. Could not reach the API. Please check your internet connection.";
        } else if (errorMessage.includes("blocked")) {
            // Extract reason if possible
            const reasonMatch = errorMessage.match(/Reason:\s*([^.]+)/i);
            const reason = reasonMatch ? reasonMatch[1] : 'Content Safety Policy';
            errorMessage = `Request blocked by API. Reason: ${reason}. Please adjust your prompt if necessary.`;
        }

        // Use backticks for HTML string
        element.innerHTML = `
            <div class="p-4 bg-red-100 border border-red-400 text-red-700 rounded">
                <p class="font-bold">Error:</p>
                <p>${errorMessage}</p>
            </div>`;
        console.error("Operation Error Details:", error); // Log full error
    }

    function setGenerateButtonsState(disabled) {
        getMealsBtn.disabled = disabled || !GEMINI_API_KEY || !weeklyBudget;
        generateListBtn.disabled = disabled || !GEMINI_API_KEY || !weeklyBudget;
        getTipsBtn.disabled = disabled || !GEMINI_API_KEY;
        // Disable budget button during API call to prevent conflicts
        setBudgetBtn.disabled = disabled;
    }

    // Helper Function to Format Output (Basic formatting)
    function formatOutput(text) {
        if (!text) return '';
        let html = text
            .trim()
            // Basic Markdown-like conversions
            .replace(/\*\*(.*?)\*\*/g, '<strong>$1</strong>') // Bold
            .replace(/\*(.*?)\*/g, '<em>$1</em>')     // Italics
            .replace(/^#+\s+(.*)$/gm, '<h4>$1</h4>') // Headings (simple)
            .replace(/^\s*[\*\-]\s+(.*)$/gm, '<li class="ml-4 mb-1">$1</li>') // List items
            .replace(/\n/g, '<br>'); // Newlines

        // Wrap list items in <ul> if detected (Improved logic)
        if (/<li>/.test(html)) {
            // Process segments separated by non-list breaks
            html = html.split(/(<br>\s*<br>)+/).map(segment => {
                if (/<li>/.test(segment)) {
                    // This segment contains list items
                    segment = segment.replace(/^(<br>\s*)+|(<br>\s*)+$/g, ''); // Trim breaks
                    return '<ul class="list-disc pl-5 space-y-1">' + segment.replace(/<br>\s*(?=<li)/g, '') + '</ul>';
                } else {
                    return segment; // Keep non-list segments as is
                }
            }).join('<br><br>'); // Rejoin segments
        }

        // Remove excessive breaks
        html = html.replace(/(<br>\s*){3,}/g, '<br><br>');
        html = html.replace(/^<br>|<br>$/g, ''); // Trim leading/trailing breaks

        return html;
    }

    // --- Initial UI State Setup ---
    function initializeUI() {
        if (!GEMINI_API_KEY) {
            getMealsBtn.disabled = true;
            generateListBtn.disabled = true;
            getTipsBtn.disabled = true;
            apiKeyInput.classList.add('border-red-500');
            apiKeyInput.placeholder = "Your Gemini API Key is Required Here";
        } else {
            apiKeyInput.classList.remove('border-red-500');
            getTipsBtn.disabled = false; // Tips don't depend on budget initially
            // Meal/List buttons depend on budget being set
            getMealsBtn.disabled = !weeklyBudget;
            generateListBtn.disabled = !weeklyBudget;
        }

        // Clear any previous outputs on load
        mealPlanOutput.classList.add('hidden');
        shoppingListOutput.classList.add('hidden');
        tipsOutput.classList.add('hidden');
    }

    // Call initialization
    initializeUI();

}); // End DOMContentLoaded