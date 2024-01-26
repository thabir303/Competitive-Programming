// //var num1,num2,num3;
// var num1=prompt("Enter first number:");
// var num2=prompt("Enter second number:");
// var num3=prompt("Enter third number:");

num1=parseInt(num1);
num2=parseInt(num2);
num3=parseInt(num3);

if(num1>=num2){
    if(num1>=num3)
       console.log(num1+" is the largest.");
    else console.log(num3+" is the largest.");
}
else {
    if(num2>=num3)
    console.log(num2+" is the largest.");
    else console.log(num3+" is the largest.");
}
    