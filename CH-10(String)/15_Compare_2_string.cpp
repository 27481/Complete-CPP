#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    // comparing 2 stringson the basis of their  position in the dictionary 

    string str1 = "cat";
    string str2 = "tiger";

    if(str1 > str2){
        cout<< str1 << "Comes first in dictionary " << endl;
    }
    else{
        cout << str2 << "Comes first in the dictionary" << endl;
    }

    // Using comprare method 
    int p = str2.compare(str2);
    cout<< "p = " << p << endl;

    return 0;
}
