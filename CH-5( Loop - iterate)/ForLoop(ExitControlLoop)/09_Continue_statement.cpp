#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int i;
    for(i=1; i<=100; i++){
        if(i%3==0){
            continue; // This  continue keyword will skip the rest of the loop and iterate back 
        }
        cout<<"i= "<<i<<endl;
    }
    return 0;
}
