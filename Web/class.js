class Person{
    
    constructor(firstName,lastName,dob){
        this.firstName = firstName;
        this.lastName = lastName;
        this.dob = dob;
    }
    calculateAge(){
        let birthday = new Date(this.dob);
        let diff = Date.now() - birthday;
        let ageDate = new Date(diff);
        return Math.abs(ageDate.getUTCFullYear()-1970);
    }
    

}

let person1 = new Person("Abir","Hasan","12-10-2001");
let person2 = new Person("Tanvir","Hasan","12-10-2000");

console.log(person1);
console.log(person2);

console.log(person1.calculateAge());
console.log(person2.calculateAge());






