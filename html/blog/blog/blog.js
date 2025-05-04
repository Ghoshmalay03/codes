function get_blogs() {
    var xhr = new XMLHttpRequest();
    xhr.open("GET", "get-blogs.php", false);
    xhr.send();
    if (xhr.status == 200) {
      return JSON.parse(xhr.responseText);
    } else {
      return [];
    }
  }