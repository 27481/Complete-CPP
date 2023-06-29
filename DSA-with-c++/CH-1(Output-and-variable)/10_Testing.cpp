#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=5;
    ++x;  // applying pre-increment i.e first increment than print 
    cout<<x<<endl; //! x=6;  

    int y=10;
    y++;  // applying post-increment i.e first print then increment 
    cout<<y<<endl;
    cout<<y<<endl;
    return 0;
}