// Placeholder for future JavaScript functionality
console.log('Clothivera script loaded.');

document.addEventListener('DOMContentLoaded', () => {

    // --- Smooth Scroll for Hero Button --- //
    const heroButton = document.querySelector('#hero button');
    const featuredProductsSection = document.getElementById('featured-products');

    if (heroButton && featuredProductsSection) {
        heroButton.addEventListener('click', (event) => {
            event.preventDefault(); // Prevent default anchor behavior if it were a link
            featuredProductsSection.scrollIntoView({ behavior: 'smooth' });
        });
    }

    // --- Add to Cart Button Functionality (Placeholder) --- //
    const addToCartButtons = document.querySelectorAll('.product-item button');

    addToCartButtons.forEach(button => {
        button.addEventListener('click', (event) => {
            // In a real app, you would get product details (ID, name, price)
            // maybe from data attributes on the button or its parent elements.
            const productItem = event.target.closest('.product-item');
            const productName = productItem.querySelector('h3').textContent;
            const productPrice = productItem.querySelector('p').textContent;

            console.log(`Added "${productName}" (${productPrice}) to cart.`);

            // Placeholder visual feedback
            button.textContent = 'Added!';
            button.disabled = true;
            setTimeout(() => {
                button.textContent = 'Add to Cart';
                button.disabled = false;
            }, 1500); // Reset after 1.5 seconds
        });
    });

});

// Example: Add event listeners or dynamic content loading here later