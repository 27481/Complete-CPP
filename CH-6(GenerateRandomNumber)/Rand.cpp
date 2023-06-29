#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){

    // 
    srand(time(NULL));
    for(int i=1; i<=10; i++){
        cout<<rand()%100<<endl;  //Rand() will give us same series of random number because its algorithm works on seed which is created only once in the program 
    }
    return 0;
}
