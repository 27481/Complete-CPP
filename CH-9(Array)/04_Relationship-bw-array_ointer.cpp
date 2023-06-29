#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int arr[5]; // [5]==== *(a+1)
        //* Name of array is pointer to the first element to the array that is emplicit we dont have to do anything ourself
        // !  ie     a[i]=*(a+i)
        
        for(int i=0; i<5; ++i){
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}
