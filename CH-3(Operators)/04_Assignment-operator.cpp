/* 
Assignment operator is a binary operator in nature that means it will operate on two operands
 */
#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){

    int x{100};
    int y;

    y=x;
    // 10 = x; // Error Lvalue is required as left of assignment   

    cout << "x = "<< x << endl;
    cout<< "y =" << y << endl;



    return 0;
}


// please remember that lvalue ie left variable always has to be a value 