// print sum of 1 to n using functional recursion and only 1 parameter.

function fun(n){
    if(n<1) return 0;
    return n + fun(n-1);
}

let sum = fun(5);
console.log(sum);