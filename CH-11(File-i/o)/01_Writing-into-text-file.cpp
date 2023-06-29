#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    
    ofstream fout;
    fout.open("myfile.txt");
    if(fout.fail()){
        cout<<"Error in opening file" << endl;
        exit(1);
    }
    fout << "This is my first line into file input/Output editing using C++" << endl;
    fout << "This is my Second Line"<< endl;
    int a = 35;
    double p = 51.50;
    fout <<"a = " << a << ", p" << p << endl;
    fout.close();

    
    return 0;
}
