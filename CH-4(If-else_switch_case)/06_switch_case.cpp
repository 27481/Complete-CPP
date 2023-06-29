// Switch case statement is alternative for if-else

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter an integer:\n";
    cin >> n;

    //! We can use switch() only integers and character type variable  not float,double
    // ! We can write cases in any order we want not mandatory for cases to be in order
    //? IF None of the cases matched then default condition will be passed

    switch (n){
    case 1:
        cout << "one" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
    case 3:
        cout << "three" << endl;
        break;
    default:
        cout << "Invalid number for us Fuck you" << endl;
    }
    return 0;
}
