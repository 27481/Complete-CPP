#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

void printVec(vector<int> v){
    for(int i=0; i<v.size(); ++i){
        // v.size() -> O(1)
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    double a[10];
    vector<int> v;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        printVec(v);
        v.push_back(x);  // O(1)
    }
    printVec(v);
    return 0;
}
