#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int i=0;
    int value=0;
    
    vector<int> data;
    
    while(true){
        cout<<"Element"<<i<<": ";
        cin>>value;
        data.push_back(value);
        i++;
    }
    return 0;
}
