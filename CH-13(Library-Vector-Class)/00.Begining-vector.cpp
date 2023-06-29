#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    
    vector <string> utkarsh;
    cout <<"Capacity:" << utkarsh.capacity()<< ", Size: "<< utkarsh.size() << endl;

    utkarsh.push_back("Pandey"); 
    cout << "Capacity: " << utkarsh.capacity()<<", Size: " <<utkarsh.size()<<endl;

    utkarsh.push_back("BBD"); 
    cout << "Capacity: " << utkarsh.capacity()<<", Size: " <<utkarsh.size()<<endl;

    utkarsh.push_back("NITM");
    cout << "Capacity: " << utkarsh.capacity()<<", Size: " <<utkarsh.size()<<endl;

    utkarsh.push_back("John");
    utkarsh.push_back("Rambo");
    utkarsh.push_back("king");

    utkarsh.shrink_to_fit();
    cout <<"Capacity: "<<utkarsh.size() <<", Size: " <<utkarsh.size()<<endl;
    return 0;
}
