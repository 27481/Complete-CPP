#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int temp = 300;
    cout<<"Address of variable temp =:\n"<<&temp<<endl;
    int *p; 
    p = &temp;
    cout<<"Content at the address:\n"<<*p<< endl;
    *p = *p + 1;
    cout<<"Content at the address:\n"<<*p<< endl;

    cout <<"Size of pointer p:"<< sizeof(p) <<endl;


    char *z;
    cout<<"size of k:"<<sizeof(z)<<endl;
    cout<<"size of k:"<<sizeof(*z)<<endl;


    double *k;
    cout<<"size of k:"<<sizeof(k)<<endl;
    cout<<"size of k:"<<sizeof(*k)<<endl;

    return 0;
}      
// size of pointer varible in memory  is dependent on the compiler 32bit or 64bit with operating system of 32 or 64 bit
