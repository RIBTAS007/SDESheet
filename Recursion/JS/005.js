// print sum of 1 to N

function fun(i,sum){
    if(i<1){
       console.log(sum);
       return;
    }
    
    fun(i-1, sum+i);
 }
 
 let i = 5;
 let sum=0;
 fun(i,sum)