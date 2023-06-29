#include<iostream>
#include<bits/stdc++.h> 
using namespace std;


int sum(int, int); // Prototype

int sum(int a, int b){
    cout<<"integer sum" <<endl;
    return a+b;
}

int sum(double a, double b){
    cout<<"Double sum"<< endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout << "3 integer sum" <<endl;
    return a+b+c;
}
int main(){
    cout<< sum(5, 1) <<endl;
    cout<< sum(5.2, 7.4) <<endl;
    cout<< sum(3, 4, 5) <<endl;

    return 0;
}


//! The function overloading allows us to write more than one verison of the same function name

    //! BTW terms function overloading and method overloading  are used interchange 

//* name of function can be same but signature of each of these version must be different 