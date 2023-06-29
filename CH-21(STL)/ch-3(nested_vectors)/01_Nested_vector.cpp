#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    // Creating a 2D vector of size 3X4
    vector<vector<int>> myVector(3, vector<int>(4));

    // assigning values to the elements of the vector 
    for(int i=0; i<3; i++){
        for(int i=0; i<4; j++)
         myVector[i][j]=i+j;
    }

    // Printing the contents of the vector 
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<myVector[i][j]<<" ";
        }
        cout<<endl;
    }

    // Adding a new row to the vector 
    myVector.push_back(vector<int>(4, -1));


    // adding the new contents of the vector 
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<myVector[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}