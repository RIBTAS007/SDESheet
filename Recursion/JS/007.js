// Fcatorial of n

function fun(n){
    if(n<1) return 1;
    return n * fun(n-1);
}

let factorial = fun(5);
console.log(factorial);