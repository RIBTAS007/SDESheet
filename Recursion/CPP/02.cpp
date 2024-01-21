// print from 1 to N using recursion.

#include <bits/stdc++.h>
using namespace std;

void fun(int i, int n){
   
   if(i>n) return;
   cout<<i<<endl;
   fun(i+1,n);
}
int main() {
	// your code goes here
   int i=1;
   int n=4;
   fun(i,n);
}