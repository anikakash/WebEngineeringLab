const randomNumber = Math.floor(Math.random() * 10) + 1;
function checkGuess() {
    // Get the user's guess from the input field
    const guess = parseInt(document.getElementById("guess-input").value);
    document.getElementById("rnd").textContent ="The random number is: " + randomNumber;
    // Check if the guess matches the random number
    if (guess === randomNumber) {
      document.getElementById("result").textContent = "Good Work!";
    } else {
      document.getElementById("result").textContent = "Not matched.";
    }
}