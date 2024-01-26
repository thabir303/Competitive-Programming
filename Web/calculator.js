console.log(`Select an option:
1.Add
2.Subtract
3.Multiply
4.Divide`);

var num1 = prompt("Enter first Number: ");
var num2 = prompt("Enter second Number: ");
var option = prompt("Enter an option");

num1 = parseInt(num1);
num2 = parseInt(num2);

var Result = null;
var num1chk = isNaN(num1);
var num2chk = isNaN(num2);
var optionchk = isNaN(option);

if (num1chk || num2chk || optionchk) console.log("Selection is Invalid!!");
else {
  if (option == 1) Result = num1 + num2;
  else if (option == 2) Result = num1 - num2;
  else if (option == 3) Result = num1 * num2;
  else if (option == 4) {
    Result = parseFloat(Result);
    Result = num1 / num2;
  }
  if (Result == null) console.log("Invalid option!!");
  else console.log("Result is : " + Result);
}
