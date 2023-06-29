//! Arithmetic Operators in C++ order of precidence ====> +,-,*,/,% 

#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int utkarsh {20}; // Variable declaration without using assignment operator
    int pandey  {10};

    int result;

    result = utkarsh % pandey; // Addtion will occur first because it has greater precidence

    cout<<"Result:"<< result <<endl;

    return 0;
}
