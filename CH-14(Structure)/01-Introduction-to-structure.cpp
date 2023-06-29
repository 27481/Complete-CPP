#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct student  
{  // Contains objects

    int student_id;
    string name;
    double grade_point;
};

int main(){
    student s1, s2, s3; // objects  
    s1.student_id = 1;  // so student id for s1 is 1
    s1.name = "utkarsh";
    s1.grade_point = 9.95;

    s2.student_id = 2;  // accessing members using dot operator 
    s2.name = "utkarsh pandey";
    s2.grade_point = 9.5;

    cout<<"ID:"<<s1.student_id<<" "
        <<"Name: " << s1.name <<" "
        <<"Grade Point" <<s1.grade_point << endl;


    return 0;
}
