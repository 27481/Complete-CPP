/* Logical operators are of 3 types 

1>>>> Logical AND: &&
2>>>> Logical OR: ||
3>>>> Logical NOT: ! 

*/

#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){

//! Logical AND working 
    int age {15};
    bool r= (age>=13)&&(age<=19);
    cout <<"Content of r is:\n" << r <<endl;

    //! Logical OR 
    int college {51};
    bool year=(college>=2)&&(college>=60);
    cout << "Content of Year is:\n"<<year<<endl;

    //! Logical Not: !
    int work {18};
    bool h= (college>=2)!=(college >= 60);
    cout << "Content of Year is:\n"<<year<<endl;


    return 0;
}
