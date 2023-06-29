#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int temp1 = 300, temp2 = 352;
    cout <<"Address of temp1:" <<&temp1 <<endl;
    cout <<"Address of temp2:" <<&temp2 <<endl;
    int *t2 = &temp2;
    cout<<"Content of t2:"<< t2 <<endl;
    cout<<"Content of the location:"<< *t2 <<endl;
    t2 = t2+1;
    cout<<"Content of the location:"<< *t2 <<endl;
    cout<<"Content of the t2:"<< *t2 <<endl;

    
    return 0;
}
