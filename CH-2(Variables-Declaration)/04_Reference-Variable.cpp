// !Use of Reference Variable 
#include<iostream>
#include<bits/stdc++.h> 


/* //!reference variable is a beautiful tool  thats going to be fruitfull we learn function and we are supposed to pass parameter to the function*/


using namespace std;
int main(){
    int x=10;

    //!This v can be used to manipulate the content of x
    int &v=x;// *Declaration of reference variable by using & we must initialize it without initializing we cant not use it 

    // IF x is int type then reference variable should be of same type too 
    //? You can not have a double reference valuable 


    return 0;
}
