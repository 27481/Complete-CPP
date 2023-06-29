#include<iostream>
#include<typeinfo>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    auto myVar = 9.5;     //!Compiler will decide dataType of variable itself 
    auto myIntVar = 51;    // Compiler will decide dataType of variable itself 

    //? Inspecting the dataType of the 2 above declared variables by using utility function available in the library

    cout<<"Type of myVar:\n"<<typeid(myVar).name()<<endl;
    cout<<"Type of myIntVar:\n"<<typeid(myIntVar).name()<<endl;

    return 0;
} 
