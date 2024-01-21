// print sum of 1 to N

#include<bits/stdc++.h>
using namespace std;


void fun(int i, int sum){
    if(i<1){
        cout<<sum;
        return;
    }

    fun(i-1, sum+i);
}
int main(){
    int n;
    int sum=0;
    cin>>n;
    fun(n,sum);

}