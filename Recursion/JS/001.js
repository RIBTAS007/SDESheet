// Print name n times.

function fun (i,n){
    if(i>n) return;
    console.log("name");
    
    fun(i+1,n);
 }
 
 
 let i = 1;
 let n =4;
 
 fun(i,n);