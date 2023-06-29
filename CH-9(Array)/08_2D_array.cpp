#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int arr[4][3];
    const int ROWS = 100;
    const int COLS = 100;

    // int arr[ROWS] [COLS]; 
    int nRows, nCols;

    cout << "How many rows:\n";
    cin>>nRows;

    while (nRows<=0||nRows>ROWS)
    {
        cout<< "Invaild number of Columns, valid is > 0 and <= " << COLS << endl;
        cout<< "Please input again: ";
        cin >> nCols;
    }

    for(int i=0; i<nRows; i++){ // initializing the array of 
        for(int j=0; j<nCols; j++){
            cout<<"Row index:"<<i<<", Col inedx:" << j << ": ";
            cin >> arr[i][j];
        }
    }
    cout<<"Conetent of the 2D array: "<< endl;  // Printing the content of 2D array
    for(int i=0; i<nRows; i++){
         for(int j=0; j<nCols; j++){
            cout<<arr[i][j] << " ";
        }
    }

    return 0;
}
