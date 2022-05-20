const sum = (...numbers)=>{
    let sum = 0;
    console.log(numbers)
    for(let num of numbers)
    sum+=num;
    return sum;
}

console.log(sum(1,2,3,4,5,6,7,8,8,9,0));