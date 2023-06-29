#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    
    string str = "Hello World";

// instead of writing a traditional for loop like index based we can use the range-based for loop
    //* Using range based for loop 

    for(char &p:str){
        // cout<< p << ", ";
        if(p>= 'a' && p <='z'){
            p -= 32;
        }
    }
    cout << str << endl;
    cout<<endl;
    return 0;
}
