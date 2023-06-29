#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    int long fact =1;   // Fact variable of type long 

    cout << "Enter a number:\n";
    cin>>n;

    if(n<0){
        cout << "Unable to find the factorial of a negative number:\n" <<endl;
        return 0;
    }

    int i=n;

    while(i>=1){
        fact=fact*i;
         --i;
    }
    cout<<"Factorial of"<<n<<"is"<<fact<<endl;

    return 0;
}
