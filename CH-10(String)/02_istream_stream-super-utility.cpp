#include<iostream>
#include<sstream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    string source = "Utkarsh ,20 ,Pandey ,40:50";
    istringstream iss (source);    // iss is the object of this class istringstream 

    //! To extract each integer number from string Using istringstream class 
    // for using istringstream class we have inculde header file called #include<sstream>
  
    string part;
    while(getline(iss, part,',')){
    cout << part << endl;
    istringstream iss2(part);
    string rec;
    while(getline iss2, rec, ":")){
        cout << rec <<endl;
    }
    cout << rec <<endl;
    }  
    return 0;
}    
