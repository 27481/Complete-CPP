#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
// Inputting string from keyboard using cin and getline 

int main(){
    
    string name;
    cout <<"Input your name:";
    // cin >>name;   // it will dicard spaces between string 

    getline(cin, name);    // it will accept spaces between string it will read entire string
    cout<<"Welcome, " << name <<"!" << endl;
    cout<<"Fucking do it";

    cout<<"What is your college:";
    string school;
    getline (cin, school);

    cout<<"Wellcome, " << name << "!" <<endl;
    cout << "You school is: " << school <<endl;
    return 0;

}
