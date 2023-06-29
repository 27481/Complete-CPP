#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

    // PRogram to rpint table of a given number 
int main(){
    int i, n;
    cout<<"Enter the number whose table you want to print:\n";
    cin>>n;

    for(i=0; i<=10; i++){
        cout<<n<< "*" << i <<"="<< (n*i) <<endl;
    }
    return 0;
}
