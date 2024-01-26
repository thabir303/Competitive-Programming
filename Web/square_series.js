var n=prompt("Enter a number : ");
var sum=1;
for(var i=1;i<=n;i++){
   sum+=i*i;
}

var str="";
console.log("Sum of series of square numbers!");
for(var i=1;i<=n;i++){
    str+=" " + (i**2).toString();
}
console.log(str);
console.log(sum);
