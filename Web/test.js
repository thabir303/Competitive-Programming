//console.log("Hello World");

function displayDate(){
    alert("This is wrong");
    document.getElementById("demo").innerHTML=Date();
}

function toupper(){
    var text="abiR";
    document.getElementById("demo2").innerHTML=
    text.toUpperCase();
}

//document.write("Bangladesh");
//window.alert(5);

// var x;
// x="a string";
// document.getElementById("demo3").innerHTML=x;
// x=5;
// document.getElementById("demo3").innerHTML=x;

var a= 1>8 ? "true":"false";
console.log(a);

var x="   abir  ";
//var y=x.trim();
x=x.trim();
console.log(x);
//console.log(y);
var name="Abir";
let age=22;
var DOB="10 December,2001"
console.log(`My name is ${name}
My Age is ${age}
Date of birth ${DOB}`);