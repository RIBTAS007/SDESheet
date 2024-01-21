// print sum of 1 to n using functional recursion and only 1 parameter.


/*
 Logic is f(n) = n + f(n-1)
*/
#include<bits/stdc++.h>
using namespace std;

int fun(int n){
  if(n<1) return 0;
  return n + fun(n-1);
}
int main(){
   int n=5;
   fun(n);
}