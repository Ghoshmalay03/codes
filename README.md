# Smart Grocery Budget Planner (India)

A web application designed for Indian users to plan weekly grocery budgets, generate shopping lists, and discover cost-saving tips tailored to the Indian market.

## Features

-   **Budget Planning:** Create weekly grocery budgets in Indian Rupees (INR).
-   **Meal Suggestions:** Get daily meal plans with simple Indian recipes based on your budget (AI-powered).
-   **Shopping Lists:** Generate itemized lists with estimated costs in INR, optimized for budget stores (AI-powered).
-   **Saving Tips:** Practical advice for reducing grocery expenses in India (AI-powered).
-   **Interactive UI:** Built with Tailwind CSS and Font Awesome for a modern, user-friendly interface.
-   **AI-Powered:** Integrates with the Google Gemini API for real-time grocery planning (requires API key).

## Tech Stack

-   **HTML5:** Core structure of the application.
-   **Tailwind CSS:** Styling and responsive design (via CDN).
-   **Font Awesome:** Icons for enhanced UI (via CDN).
-   **JavaScript:** Handles user interactions and API calls.
-   **Google Gemini API:** Provides AI-driven grocery planning.

## Setup and Usage

1.  **Clone or Download:** Get the project files.
2.  **Open `index.html`:** Open the `index.html` file in your web browser.
3.  **Enter API Key:** You need a Google Gemini API key. You can get one from [Google AI Studio](https://aistudio.google.com/app/apikey).
    -   Enter your API key in the input field at the top of the page.
    -   The key is stored locally in your browser's local storage and is required for the meal plan, shopping list, and saving tips generation.
4.  **Set Budget:** Enter your total weekly grocery budget in INR and click "Set Budget".
5.  **Generate:** Use the buttons to generate meal plans, shopping lists, or saving tips based on your budget and the AI.

**Note:** The API calls in `script.js` are currently placeholders using mock data. You will need to replace them with actual fetch calls to the Gemini API using your key. 