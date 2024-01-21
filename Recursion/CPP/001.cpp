// Print name N times using recursion.

/*
  void f(i,n){
    if(i>n)
     return;
  }

  here we are passing 2 parameters i and n 
  base case : i>n then break/return

  say n =3 

  f(1,3) -> f(2,3) -> f(3,3) -> f(4, 3) -> return;
   TC: O(n)
   SC: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

void fun(int i,int n){
    if(i>n)
    return;
    
    cout<<"name"<<endl;
    fun(i+1,n);
}

int main() {
	int n = 3;
	int i=1;
	fun(i,n);

}