// Passing the structure object to a function 

//! We will pass the reference of object to a function as well as passing the structure object by value to function 


#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

struct bankaccount{   // struct variable contains objects in it 
    int accNo;
    string holderName;
    double balance;  
};

bankaccount readAccountData(){
    bankaccount acc;
    cout <<"Input Account Number :";
    cin>>acc.accNo;

    cout<<"input Holders Name: ";
    getline(cin, acc.holderName);

    cout<<"Initial Balance:";
    cin>>acc.balance;

    return acc;
};

void printAccountData(bankaccount acc){
    cout<< "Accout Details" <<endl;
    cout<< "___________________________"<<endl;
    cout<< "Account Number :" << acc.accNo <<endl;
    cout<< "Holder Name: "<< acc.balance <<endl;
    cout<< "Balance: $"<< acc.balance <<endl;

} 

int main(){
    bankaccount a;
    a = readAccountData();
    printAccountData(a);
    
    return 0;
}
