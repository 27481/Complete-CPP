#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    int fact;
    fact=1;

    cout<<"Enter the number whose factorial you want to find out:\n";
    cin>>n;

    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
        cout<<"The factorial of"<<n<<"is"<<fact<<endl;

    return 0;
}
