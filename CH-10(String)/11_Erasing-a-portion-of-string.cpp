#include<iostream>
#include<bits/stdc++.h> 
using namespace std;


int main(){
    string str = " Peace is my goal and program is peace";
    // str.clean();
    // if(str.empty())
    //     cout << "String is empty!!" << endl;
    // else
    // cout <<"String is NOT empty !!" << endl;

    str.erase(str.begin()+12, str.end()-5);
    
    cout<< str <<endl;    
    return 0;
}
