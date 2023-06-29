#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int year;

    // The year is leap only if it is divisible by 4 and not divisble by 100 or it is divisible by 

    cout<<"Enter year:\n";
    cin>>year;




    if((year%4==0 && year%100!=0) || (year%400==0))
        cout<<"YES, it is a leap year" <<endl;
    else
    cout<<"No, not a leap year"<<endl;


/* 
    cout<<"Enter year:\n";
    cin>>year;

    if(year%4==0){
        //We need to test whether it is divisuble by 100 
        if(year%100==0){
            if(year%400==0)
                cout<<"Yes, it is a leap year"<<endl;
            else
            cout<<"No, it is not a leap year"<<endl;
            
        }
        else{
            cout<<"Yes it is a leap year"<<endl;
        }

    }
    else{
        cout<<"Not a leap year"<< endl;
    } */

    return 0;
}
