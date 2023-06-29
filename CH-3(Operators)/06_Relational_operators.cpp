// Often in programming we need to compare values that can be done by using relational operator

// In C++ we have 6 relational operators 

//! Any relational operation is practically a boolean value  either true or false
/*
1>>>>  >  Greater than 
2>>>>  <  Less than 
3>>>>  >=  Greater than equals to
4>>>>  <=   Lesser than equals to
5>>>>  ==   Equals to Equals to 
6>>>>  != Not equals to
 */

#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int a {100};
    int b {20};
    int r;

    bool p = false;
    bool var = a>b;

    cout <<"p="<<p<<endl;
    cout <<"p="<<var<<endl;
    // Printing DataType of the variable 
    cout <<"Type id:\n" << typeid(10>20).name()<<endl;
    cout <<"Type id:\n" << typeid(p).name()<<endl;

    return 0;
}
