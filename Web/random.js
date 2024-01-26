// let x=Math.floor(Math.random()*11)+1;
// console.log(x);

//max and min both included
let getRandomInt = (max,min) => {
     return Math.floor(Math.random()*(max-min+1)+min);
};

let min=prompt("Enter the smallest random number : ");
let max=prompt("Enter the large random number : ");
let x = getRandomInt(max,min);

console.log(x);