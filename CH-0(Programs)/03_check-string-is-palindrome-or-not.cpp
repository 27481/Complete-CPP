#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

bool is_palindrome(string utkarsh){
    for(int i=0; i<utkarsh.length()/2; i++){
        if(utkarsh[i]!=utkarsh[utkarsh.length()-i-1])
         return false;
    
    return true;
    }
}
int main(){
    string utkarsh="abccba";  // abccba
    string utkarsh_2="race star"; // rats ecar

    // i: 0
    // check :  a b c c b a
    // index:   0 1 2 3 4 5 

    // length : 6
    // middle : 3

    if(is_palindrome(utkarsh)) cout<<utkarsh<<"-> is a palindrome"<<endl;
    else cout<<utkarsh<<" -> is not a palindrome"<<endl;
    return 0;
}
