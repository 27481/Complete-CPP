#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    // WAP to find sum of all the digits in a number

    int n;
    int sum=0;
    int rem=0;


    cout<<"Enter the number whose sum you want to find out:\n";
    cin>>n;
    n = abs(n); // abs() will convert -ve number into +Ve number 


    while(n>0){
    rem=n%10;      // Performing modulo diving by 10 gives last digit as remainder 
    sum=sum+rem;   // Performing cumualtive addition 

    n=n/10;        // performing division operation by 10 to shift the counter 

    }
    cout<<"The sum of "<<n<<"number is:\n"<<sum<<endl;     
    return 0;
}
