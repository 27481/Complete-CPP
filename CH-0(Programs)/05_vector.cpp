// Declaring and traversing a vector using iterator

#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    cout<<"Enter the total size of the vector :";
    int total;
    cin>>total;

    vector<int>utkarsh(total);

    // intitializing and traversing vector 
    for(int i=0; i<total; i++){
        cout<<"Enter the "<<i<<": "<<endl;
        cin>>utkarsh[i];
    }
    for(auto traverse : utkarsh) cout<<traverse<<" "; 


    return 0;
}
