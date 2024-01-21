// print 1 to N but without using f(i+1, N).

/*
 This is called backtracking.
 we will use f(i-1,N).

*/

#include<bits/stdc++.h>
using namespace std;

void fun(int i, int n){
   if(i<1) return;
   fun(i-1,n);
   cout<<i<<endl;
}
int main(){
  int n =4;
  int i = n;
  fun(i,n);
}