
function fun(i,n){
    if(i<1) return;
    fun(i-1,n);
    console.log(i);
}

let n = prompt("Enter the value of n:"); 
n = parseInt(n);
let i=n;
fun(i,n);