document.getElementById("get_data").addEventListener("click", loadjokes);

function loadjokes(e) {
  let xhr = new XMLHttpRequest();

  xhr.open("GET", "https://api.chucknorris.io/jokes/random", true);

  xhr.onload = function () {
    if (this.status === 200) {
      let data = JSON.parse(this.responseText);
      let joke = data.value.joke;
      console.log(joke);
    }
  };
  xhr.send();
}
