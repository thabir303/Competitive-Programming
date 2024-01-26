let person = {

    firstname: "Abir",
    lastname: "Hasan",
    dob: "10-12-2001",
    
    //method
    fullname: function(){
        return `${this.firstname} ${this.lastname}`;
    }
}

console.log(person.firstname);
console.log(person.fullname());
console.log(person.dob);

let dateN = Date.now();
let birthday = new Date("12-10-2001");
let bd = birthday.getTime();
let diff = dateN - bd;
// console.log(birthday);
// console.log(bd);
console.log(diff);
let ageDate = new Date(diff);
console.log(ageDate);

let ans = Math.abs(ageDate.getUTCFullYear() - 1970);

console.log(ageDate);