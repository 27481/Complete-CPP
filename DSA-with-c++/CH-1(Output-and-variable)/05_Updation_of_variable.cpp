//! Printing value in C++ and updation of variable 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=5;
    cout<<x;
    
    x=x+6;                                //* techincally its increment operator 
    cout<<x;
    x=x-20;
    x+=16;
    cout<<x<<endl;
    return 0;
}