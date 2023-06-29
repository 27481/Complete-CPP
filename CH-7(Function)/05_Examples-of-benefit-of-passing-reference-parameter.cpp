#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

void swap(int &a, int &b){   // Using reference parameter 
    int temp = a;
    a = b;
    b = temp;
}


int main(){
    int first{10}, second{20};
    cout<<"First =" << first <<", Second= " << second << endl;

    swap(first, second); 
    cout << "First ="<< first << ", Second= " << second << endl;

    return 0;
} 
