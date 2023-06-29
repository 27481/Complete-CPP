#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int age {};
    cout <<"Enter an age:\n"; // Prompting user to enter age 
    cin>> age;   // Taking the value from the user into age variable

    if (age>=13 && age<=15)
        cout<<"Yes, the given age is not teen age!!!"<<endl;
    else
        cout<<"No, the given age is not teen age!!!"<<endl;
    

    return 0;
}
