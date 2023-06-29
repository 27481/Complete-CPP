#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    
    string str = "Hello World";
    cout <<str.at(0) <<", " <<str.at(str.length()-1)<< endl;
    cout<<str.at(1) <<", " <<str.at(str.length()-2)<<endl;

    for(int i=0; i < str.length(); ++i){                   // Traversing entire list
    // cout << str[i] << ", ";
    if(str.at(i) >= 'a' && str.at(i) <= 'z'){
        str.at(i) -=32; // ascii value of lower case start with 97 , ascii value for upper case is 65
        }
    }
    cout<<str;
    return 0;
}
