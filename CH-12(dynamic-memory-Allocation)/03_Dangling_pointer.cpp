#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

// deep copying vs shallow copy in an array 

int* getArray (int n);
int* copyArray(int *source, int n);
void printArray(int *a, int n);

int* getArray(int n){
    int *p ( new int[n]);
    time_t t = time(NULL);
    srand(t);

    for(int i=0; i<n; ++i){
        p[i] = rand() % 100;
    }
    return p;
}

int* copyArray(int *source, int n){
    int*dest (source); // Copying the content of the source this pointer to another  pointer desk , but we actually copying the base address to another pointer 
    // This is what we call shallow copy

    return dest;
}

void printArray(int *a, int n){
    cout <<"Content of array: " <<endl;
    for(int i=0; i<n; ++i){
        cout <<a[i] << " ";
    }
    // cout << a[i] << " ";
}


int main(){
    cout << "Input number of elements you want to process: ";

    int n;
    cin>>n;

    int *arr = getArray(n);
    int *dest = copyArray(arr, n);
    printArray(arr, n);

    delete[] arr;

    cout << endl;
    return 0;

}
