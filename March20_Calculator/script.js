function div() {
    let num1 = document.getElementById("num1").value;
    let num2 = document.getElementById("num2").value;
    let result = parseInt(num1) / parseInt(num2);
    document.getElementById("result").textContent = "Result: " + result;
}

function multiply() {
    let num1 = document.getElementById("num1").value;
    let num2 = document.getElementById("num2").value;
    let result = parseInt(num1) * parseInt(num2);
    document.getElementById("result").textContent = "Result: " + result;
}