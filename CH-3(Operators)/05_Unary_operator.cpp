// Unary incremnet operator: ++
// Unary decrement operator: ++

#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int x{51};
    int p;

    cout << "x = " <<x<<endl;
    x--;
    cout << "x = " <<x<<endl;
    p=++x;
    // p=++5;     //ilegal way because we can not have that constant as Lvalue
    cout << "x = " <<p<<ends;


//! we can use these operator as postfix n infix
// Both prefix and infix works same way but after getting assignment operator preference will change

    return 0;
}
