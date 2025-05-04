const filters = document.querySelector('.filters');
filters.addEventListener('change', (e) => {
  // Get the selected values
  const category = filters.querySelector('select[name="category"]').value;
  const price = filters.querySelector('select[name="price"]').value;
  const author = filters.querySelector('input[name="author"]').value;

  // Filter the blog previews
  const blogPreviews = document.querySelectorAll('.blog-preview');
  blogPreviews.forEach((preview) => {
    let visible = true;

    // Check if the category matches
    if (category && preview.dataset.category !== category) {
      visible = false;
    }

    // Check if the price matches
    if (price && preview.dataset.price !== price) {
      visible = false;
    }

    // Check if the author matches
    if (author && !preview.textContent.includes(author)) {
      visible = false;
    }

    // Toggle the visibility of the preview
    preview.style.display = visible ? 'block' : 'none';
  });
});

// Publish Your Blog Form
const publishForm = document.querySelector('#publish-your-blog form');
publishForm.addEventListener('submit', (e) => {
  e.preventDefault();

  // Get the form data
  const title = publishForm.querySelector('input[name="title"]').value;
  const content = publishForm.querySelector('textarea[name="content"]').value;
  const tags = publishForm.querySelector('input[name="tags"]').value;
  const image = publishForm.querySelector('input[name="image"]').files[0];

  // Create a new blog post object
  const blogPost = {
    title: title,
    content: content,
    tags: tags.split(','),
    image: image,
  };

  // Send the blog post to the server
  fetch('/api/blogs', {
    method: 'POST',
    headers: {
      'Content-Type': 'application/json',
    },
    body: JSON.stringify(blogPost),
  })
  .then((response) => {
    if (response.ok) {
      // Redirect to the blog post page
      window.location.href = `/blogs/${response.id}`;
    } else {
      // Display an error message
      alert('Error publishing your blog post. Please try again.');
    }
  });
});