#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int add(int, int=2); // Adding prototype of the function 

int main(){
    // In c++ you can mention default values for the function parameter and this freature turns out to be really useful one sometimes when we implement the methods or functions 

    
    int r=add(10, 20);
    cout<<r<<endl;

    return 0;
}

int add(int a, int b=2){
    return a+b;
}

/* //!09_Default_Parameter.cpp:17:5: error: default argument given for parameter 2 of ‘int add(int, int)’ [-fpermissive]
   17 | int add(int a, int b=2){
      |     ^~~
09_Default_Parameter.cpp:5:5: note: previous specification in ‘int add(int, int)’ here
    5 | int add(int, int=2); // Adding prototype of the function
      |     ^~~ */
