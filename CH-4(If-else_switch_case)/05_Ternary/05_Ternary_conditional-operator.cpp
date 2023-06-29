#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int main(){

    int a,b, result, max;

    cout<<"Input first number :\n"<<endl;
    cin>>a;

    cout<<"Input second number :\n"<<endl;
    cin>>b;

    // Using ternary operator 
    result = (a>b)?a+b:a-b;
    max = (a>b && a>c)? a: ((b>c)?b:c);

    cout << result << endl;
    return 0;
}


// Condition/Ternary operator can be used in place of if-else
//  we have to supply 3 operands to work with ternary operator
//!  Syntax ======>>>>>
//                   *(CONDITION)?(EXPRESSION FOR TRUE):(EXPRESSION FOR FALSE)