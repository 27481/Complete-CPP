#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    
    ifstream fin;
    fin.open("myfile.txt");
    if(!fin){
        cout << "Error while opening file" << endl;
        exit(1);
    }

    int val;

    while(fin.eof()){//file object reaches the end of the file eof() will return true
        fin >> val;
        cout << val << " ";
    }
    fin.close();
    cout <<endl;

    cout << "Total number of integers in the file:" << count << endl;
    cout << "Total all integers in the file:" << sum << endl;
    return 0;
}
