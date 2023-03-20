function div() {
    let num1 = Number(document.getElementById("num1").value);
    let num2 = Number(document.getElementById("num2").value);
    let result = num1/num2;
    document.getElementById("result").textContent = "The Result is: " + result;
}

function multiply() {
    let num1 = Number(document.getElementById("num1").value);
    let num2 = Number(document.getElementById("num2").value);
    let result = num1 * num2;
    document.getElementById("result").textContent = "The Result is: " + result;
}

function sub(){
    let num1 = Number(document.getElementById("num1").value);
    let num2 = Number(document.getElementById("num2").value);
    let result = Math.abs(num1-num2);
    document.getElementById("result").textContent = "The Result is: " + result;
}