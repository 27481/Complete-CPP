#include<iostream>
#include<bits/stdc++.h> 
//! Write a function to calculate total pay for the employee
// Total pay == hours worked X rate 

// also if the total number of hours_worked>40 then for each additional hour more than 40 then epmloyee should be given 2$ per hour 


double totalPay(int hrsWorked, double ratePerHr){  // These are called Formal Argument or Formal parameter 
// Formal arguments are the reciever of the actual arugment 
    double total = hrsWorked * ratePerHr;
    if(hrsWorked > 0){
        total = total + (hrsWorked - 40) * 2;
    }
    return total;
}
using namespace std;
int main(){

    int hours_worked;
    double rate;


    cout<<"Enter the hours_worked:\n="<<endl;
    cin>>hours_worked;

    cout<<"Enter the rate:\n"<<endl;
    cin>>rate;


    totalPay(hours_worked, rate);  // These are called argument or actual arugments

    double total = totalPay(hours_worked, rate);
    cout<<"Total Pay="<<total<<endl; 
    return 0;
}
