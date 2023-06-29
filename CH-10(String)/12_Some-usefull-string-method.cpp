#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){

    string str = "Keep working hard";

    str.push_back('.'); // Inserting character at the end of the string 
    cout<< str <<endl;

    str.pop_back();   //! Deleting the last character from the string 
    cout<< str <<endl;

    str.front() = 'P';  //! Change the first character of string 
    cout << str <<endl;

    str.back() = "E";   //! replace the reference to last letter character 
    cout << str <<endl;

    str.append(", do you agree?");  //! append() will new string in the last of the previous string
    cout << str <<endl;

    str.insert(11,"(inserted)");   //! insert new string at any index
    cout << str <<endl;


    return 0;
}
 