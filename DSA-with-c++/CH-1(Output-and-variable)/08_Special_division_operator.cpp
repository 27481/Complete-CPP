#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=5;
    int y=2;
    //! division operator is special because it gives result in form of greatest integer 
    //! because when we divide 2 dataType of int we will get answer in int type only 
    //! unlikely python where result of division is always in float by default
    cout<<x/y<<endl;
    int z=x/y;
    cout<<z;
    return 0;
}0