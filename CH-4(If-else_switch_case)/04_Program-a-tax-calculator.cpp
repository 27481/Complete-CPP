/* 

Tax Calculator:

Income                                                       Tax Rate
< 0                                                          Invalid
>=0 and < 500                                                0.0%
>=5000 and < 10000                                           6.0%
>=10000 and < 20000                                          12.0%
>=20000 and < 50000                                          30.0%

 */

#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){

    double salary, Tax;
    cout<<"Enter your yearly salary:\n"<<endl;
    cin>>salary;


    if(salary<0){
        cout<<"Invalid Entry\n"<<endl;
        return 0;
    }
    else if (salary>=0 && salary<500){
    cout<<"Tax is : 0"<<endl;
    }
    else if(salary>=5000 && salary<10000){
    cout<<"Tax is : 6.0%"<<endl;
    }
    else if (salary >=100000 && salary<20000){
    cout<<"Tax is: 12%"<<endl;
    }
    else if (salary>=20000 && salary<50000){}
    cout<<"Tax is:"<<endl;

return 0;

}    
