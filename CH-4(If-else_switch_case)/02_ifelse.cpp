#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int first{};
    int second{};

    cout << "Enter first number:\n"<< endl;
    cin >> first;
    cout << "Enter second number:\n"<< endl;
    cin >> second;

    if(first>second){
        cout<<"maximum is: "<< first<<endl;
    }
    else if(second>first){
        cout<<second<<"is maximum:\n" << endl;
    }
    else{
        cout<<"Both are equal"<< endl;
    }
    return 0;
} 
