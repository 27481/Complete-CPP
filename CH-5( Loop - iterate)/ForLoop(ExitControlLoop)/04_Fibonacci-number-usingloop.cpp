#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    //! Fibonacci series === 0,1,1,2,3,5,8,13,21,34,21,34,55,89,144.....

    int t1, t2, sum, i;
    int n;
 
    cout<<"Enter how numbers of fibonacci series you want to print:\n";
    cin>>n;

    for(t1=-1,  t2=1,  i=1; i<=n; ++i){
        sum = t1 + t2;
        cout<<"\n"<< sum << " ";
        t1=t2;
        t2=sum;

    }

    return 0;
}
