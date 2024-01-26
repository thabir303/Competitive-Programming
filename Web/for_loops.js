
//for-in 
//for-of (except object)

let name="This is a name";
let array=["bana","anjed","dajam","sns"];
let person = {
    fname : "abir",
    lname : "Hasan",
    dob : "10-12-2001",

}

//for-in
for(var i in person){
    console.log(`Values : ${i} ${person[i]}`);
}

//for-of
// for(var i of person){
//     console.log(`Item : ${i}`);
// }

for(var i in name){
    console.log(`Values :  ${i} ${name[i]}`);
}

for(var i in array){
    console.log(`Arrays :  ${i} ${array[i]}`);
}

