#include<iostream>   
#include<bits/stdc++.h> 
using namespace std;                           //! RANGE FOR LOOP
const int array_size = 5;

void printArray(int (&x) [array_size]){
    cout<<"In the function:\n "<< endl;
     for(auto k:x){
        cout<< k << " ";
    }

}
int main(){

    int x[] = {10, 20 ,30 ,40, 50};

    // for(int p:x){        // Printing array using range for
    //     cout<< p <<" ";
    // }  

    for(int &p:x){
        p*=2;
    }

    printArray(x);
    return 0;
}
