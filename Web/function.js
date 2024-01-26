//normal declaration
function printSomething(name){
    console.log('Hello '+name);
}

//function Expression

let printSomething1 = function(name1){
    console.log('Hello '+name1);
}

//Arrow function

let printSomething2 =(name2,name3) => {
    console.log(`${name2}  ${name3}  is my friend`);
}

// var name=prompt('Enter your name : ');
// printSomething(name);

// var name1=prompt(`Enter your friend's name : `);
// printSomething1(name1);

//var name2=prompt('Your and your friend"s name is : ');

// printSomething2(name,name1);



let functionName = function(){
    return 10+5;
}
console.log(functionName());

let printSomethingInfinity = () =>{
    console.log(1000+1222);
}

printSomethingInfinity();

var foods=["Cake","Burger","Ice Cream","Chocolates"];
var numbers=[1,2,3,4,5,6];

function addSomething(item){
    return `${item} is a food`;
}

let arr_res = foods.map(addSomething);
console.log(arr_res);