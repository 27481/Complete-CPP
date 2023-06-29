#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){

    //  iterators having a special place in C++ they are the objects that helps us to iterate through a collection or ranges of elements like 
    // string which is collection of characters like that we will have several collection classes going through like stack, queue or vectors 

    string str = "Hello";
    // string::iterator it;  //! This iterator is belonging to string here & that :: is typically called scope resolution operarator that results S-Corp

    string::iterator utkarsh = str.begin();
    while(utkarsh != str.end()){
        cout << *utkarsh <<", ";
        ++utkarsh;
    }
    cout<< str << endl;
    return 0;
}
