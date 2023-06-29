#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    string str("Hello Utkarsh!, Keep learning");
    string target("+. !,");

    string::size_type pos = str.find_last_of(target); 
    cout <<"Found "<< str[pos] << "' at: " << pos << endl;

    while(pos!=string::npos){
        // cout << "Found '" << str[pos] << "' at: " << pos << endl;
        str[pos]='$';
        pos = str.find_first_of(target, pos+1);
    } 
    cout <<str<< endl;

    return 0;
}
