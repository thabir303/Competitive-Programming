const numbers = [1, 4, 5, 5, 3, 2, 2, 6, 9];

const duplicates = numbers.filter(function(value, index, self) {
    return self.indexOf(value) !== index;
});

console.log(duplicates);
