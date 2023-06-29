#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

//! Functions are used to decompose entire program into parts for easy execution 

void utkarsh(){
    cout <<"Hello World"<<endl;
    cout <<"Thank you"<<endl;
}
void pandey(){
    cout <<"Hello World"<<endl;
    utkarsh();
    cout <<"Hello World"<<endl;
    cout <<"Hello World"<<endl;
}
using namespace std;
int main(){
    
    // pandey();
    // utkarsh(); //! calling of function name utkarsh
    // cout<<"WILL CALL AGAIN"<<endl;
    // utkarsh();

    pandey();
    return 0;
}
