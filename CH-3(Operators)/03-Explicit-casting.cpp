/* Explicit casting  */


/*

Division of 2 different dataType will give presidence to higher one 
Like ====>>>
           int/int ===       int
           int/double ===    double
           float/double ===  double
           double/longdouble === ld
           int/long ===          long
           long/long     ====  long
           

 */
#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int first {10};
    int second {120};

    double result;

    // Here division operation will take place first prior to the assignment operator

    result = first/(double)second; // Explicit casting ie we are telling compiler to forcefully convert the DataType of the variable to 



    cout << "Result:" <<result << endl;


    return 0;
}
