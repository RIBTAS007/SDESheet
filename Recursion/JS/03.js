// Print N to 1

function fun(i,n){
    if(i<1) return;
    console.log(i);
    fun(i-1, n);
 }
 
 let n=4;
 let i=n;
 fun(i,n);