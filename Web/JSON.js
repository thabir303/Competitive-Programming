var student = {
    name : "Tanvir Hasan Abir",
    age : 22,
    hometown : "Narsingdi"

}

var student_json = JSON.stringify(student);

console.log(student_json);

var json_student = JSON.parse(student_json);

//console.log(json_student);