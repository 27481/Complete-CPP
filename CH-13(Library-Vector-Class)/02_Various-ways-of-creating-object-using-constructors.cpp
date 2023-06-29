#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
void display(vector <int> &utkarsh){
    cout << "Size: " << utkarsh.size() <<", Capacity: " << utkarsh.capacity() << endl;
    cout << "Conent of the vector: "<<endl;
    for(int p:utkarsh){
        cout << p <<",";

    }
    cout <<endl;
}
int main(){
    vector <int> v1;    // an empty vector
    vector <int> v2(5);  // Vector with 5 integer elements each with zero

    display(v1);  // calling display function
    cout <<endl;

    display(v2);
    cout <<endl;

    vector <int> v3(5, -1);
    display(v3);


    
    int x[] = {10, 20, 30, 40, 50};  
    vector <int> v4 (x+1, x+3); // copying array data into vector 
    display(v4);
    cout<<endl;


    vector <int> v5 (v4);
    display(v5);
    cout << endl;


    vector <int> v6 (v5.begin(), v5.end());  // copying one vector into another using iterator 


    display(v6);

    return 0;
}
