class Person{
     constructor(firstName,lastName,dob){
        this.firstName=firstName;
        this.lastName=lastName;
        this.dob=dob;
     }

     greeting(){
        return `Hello ${this.firstName} ${this.lastName} `;
     }

}

class Customer extends Person{
    constructor(firstName,lastName,phone,membership){
        super(firstName,lastName);
        this.phone = phone;
        this.membership = membership;
    }
    fullName(){
        return `Hello Mr.${this.firstName} ${this.lastName}`;
    }
}

let person1 = new Person("Tanvir","Hasan","12-10-2001");
let customer = new Customer("Abir","Hasan","1-02-2000");

console.log(person1);
console.log(customer);

console.log(person1.greeting());
console.log(customer.greeting());

console.log(customer.fullName());
