#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
const int array_size = 5;

void printArray(int (&p) [array_size]){
    for(int i=0; i<5; i++){
    cout<<p[i]<<" ";
    }
}


int main(){
    // Recieving refernce to the array instead of passing the base address we can pass the reference often at it as well 

    int x[] = {10, 20 ,30 ,40, 50};
    printArray(x);
    return 0;
}
