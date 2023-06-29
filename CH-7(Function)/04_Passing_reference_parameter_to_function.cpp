#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

void utkarsh(int &, int &);   // FunctionPrototype 

int main(){
    int x, y;
    x=20; y=30;
    cout<<"x= "<< x << ", y = " << y << endl;
    utkarsh(x, y);     //! Function calling by passing parameter
    cout<<"x= "<< x << ", y = " << y << endl;

    return 0;
}

void utkarsh(int &a, int &b){  
    //! Here due to that & values are not getting copied and passed to formal paramter but they are refering back to x and y in the main so using these reference we can actually manipulate the actuall location 
    // b ======refersto======y     a==========refersto=========x 
    a=a+5;
    b=b-10;

}

//! If we need to return back more than one value to the caller using return statement we can not do but using & reference parameter to the function we can 
