#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    string str = "Hello";

    string::reverse_iterator utkarsh = str.rbegin();
    while(utkarsh != str.rend()){
        cout << *utkarsh << ", ";
        ++utkarsh;
    }
    return 0;
}
