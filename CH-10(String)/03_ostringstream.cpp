#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string name = "John";
    int age =10;
    ostringstream oss; // Its a ostringstream object oss it 
    oss << name << ":" << age;
    string str = oss.str();
    cout << str << endl;  // a string composed of a string and an integer number 
    return 0;
}
  