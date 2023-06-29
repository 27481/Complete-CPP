#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

void display(vector <string> &v){
    cout <<"Size: " << v.size() << ", Capacity: " << v.capacity() <<endl;
    cout <<"Content of the vector: "<<endl;
    // for(string p:v){   // instead of range ForLoop we will use iterator ForLoop
    //     cout << p <<", ";
    // }
    for(vector<string>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it <<", ";
    }
    cout <<endl;
}
int main(){
    vector <string> names ("Utkarsh", "Pandey", "BBD", "NITM");
    display(names);

    //To clear entire vector
    names.clear();
    display(names);

    return 0;
}
