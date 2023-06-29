#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=5;
    // ! both are basically same ++x or x++ they will increment var by one
    x++; 
    cout<<x;
    x--;
    cout<<x;
    ++x;
    cout<<x;
    --x;
    cout<<x<<endl;

    int y=5;
    cout<<y<<endl;
    ++y;   // pre increment         i.e    first increment then print
    cout<<y<<endl;
    y++;   // post increment        i.e first print then inrement
    cout<<y<<endl;
    return 0;
}