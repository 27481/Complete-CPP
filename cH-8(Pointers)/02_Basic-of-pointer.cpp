#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int temp = 300;
    cout<<"Address of variable temp =:\n"<<&temp<<endl;
    int *p;  //! p is pointer of int type 
    double *k;
    p = &temp;
    cout<<"Content at the address:\n"<<*p<< endl;
    *p = *p + 1; // using pointer variable and dereferencing operator you can change the content of the the value aswell

    cout<<"Content at the address:\n"<<*p<< endl;

    return 0;
}
     