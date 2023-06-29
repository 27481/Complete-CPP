      #include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int sum=0;
    int number;
    char response;

    // do-while will be executed atleast once even if the conditon is wrong 
    // Termination condition is tested at the ending 

    do{
        cout<<"Input a number:\n";
        cin>>number;
        sum+=number;
        cout<<"Want to continue? Y/y to continue, any other to exit"<<endl;
        cin>>response;

    }while(response == 'Y'||response =='y');

    return 0;
}
