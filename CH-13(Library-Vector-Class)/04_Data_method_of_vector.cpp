#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    // data method return base address to the array that is actually keeping data for the vector 

    vector <int> v {10, 20, 30, 40, 50};
    int *p = v.data();
    cout <<*p << endl;    
    cout <<*(p+1) << endl;    


    *(p+2) =*(p+2) + 5;
    for(int i=0; i<5; ++i){
        cout <<p[i] <<endl;
    }
    cout<<endl;

    cout << "Content printed using vector object " << endl;
    for(int k:v){
    cout << k << " ";  
    }
    cout << k <<" ";

    return 0;
}
