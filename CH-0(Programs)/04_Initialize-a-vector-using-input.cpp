#include<iostream>
#include<bits/stdc++.h> 
#include<vector>
using namespace std;
int main(){
    cout<<"Number of Elements: ";
    int total =0;
    cin>>total;

    vector<int> data(total);

    // making a loop to initialize the data

    for(int i=0; i<total; i++){
        cout<<"Element"<<i<<": ";
        cin>>data[i];
    }

    for(auto elem : data) cout<<elem<<" ";
    cout<<endl;

    return 0;
}
 