#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int* fun(int n){ // a function of interger pointer type


    int *p = new int[n];  // here pointer p is a compile time allocation which will be allocated in the stack area 

    time_t t = time(NULL);
    srand(t);

    for(int i=0; i<n; i++){
        p[i] = rand() % 100;
    }
    delete [] p;
    // Doing some  task with the block pointed by p

    return p;
}


int main(){
    fun(10000);   // passing n=10000 into function fun()
    fun(50000);

    return 0;
}
