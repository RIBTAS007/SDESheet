// print factorial of n

#include<bits/stdc++.h>
using namespace std;


int fact(int n){
    
    if(n<1) return 1;
    return n* fact(n-1);
}
int main(){
    int ans = fact(8);
    cout<<ans;
}