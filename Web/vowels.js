const vowels = ['a','e','i','o','u','A',"E",'I','O','U'];

//Method 1: 

// vowelsCount = (sentence) =>{
//     let count=0;
//     for(let i=0;i<sentence.length;i++){
//         for(let j=0;j<10;j++){
//         if(sentence[i]==vowels[j])
//          count++;
//     }
//     }
//     console.log(count);
// }

//Method 2 :

vowelsCount = (sentence) =>{
    let count=0;
    const lettersArray = Array.from(sentence);

    lettersArray.forEach(function(value){
        if(vowels.includes(value))
         count++;
    });
    console.log(count);
}
vowelsCount("Abir abir abir ");