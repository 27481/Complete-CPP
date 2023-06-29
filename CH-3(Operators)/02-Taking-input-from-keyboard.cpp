#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int var{}; //! Declaring variable without assigning value will result in formation of garbage value
    int var2{51};
    cout << var << endl;


    /* now we are intrested in taking some value from keyboard so that the user is going to be prompted to enter a value  and then what the user types in that we want to assign that to this to the variable
     */

    cin >> var;/* This is basically taking the value from the memory and inserting it to
    into memory of machine 

    cin >> act as a pipeline between the keyboard and the memory it is done by operating system*

    >>> is called Extraction Operator use to assign value to computer
    <<< is called 
    */

   cout << "Enter an integer value:\n"<<endl;
   cin>> var;

   cout <<"Var:" << var << endl;
   
    return 0;
}
