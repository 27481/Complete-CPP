#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
void display (int *p, int n){
    for(int i=0; i<n; i++){
        cout << setw(4) << p[i];
    }
    cout <<endl;
}
int main(){
    
    int x[100];  // Compile time allocation compiler will deallocate the memory 
    cout << "Input how many integer elements that you want to process:";
    int n;
    cin>> n;
    //!  Doing run time memory allocation using that new keyword in C++
    int *p = new int[100];  
    // When ever we do dynamic memory allocation applying the new keyword gets allocated 
    for(int i=0; i<n; ++i){
        cout <<"Next int:";
        cin>> *(p + i);
    } 
    display (p, n);

    delete [] p;  // deallocating the memory 

    return 0;
}
