#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

class Circle{
        private:
               int radius;
        public:
            Circle(int radius){
                this->radius=radius;
            }
            double getArea(){
                return 3.14159* radius * radius;
            }
            void display(){
                cout<<"Radius: "<< radius
                <<". Area:"<< getArea()<<endl;
            }
    }

int main(){
    //! Operator overloading can change the natural meaning of operators 
    // ! Operator Overloading ------redefining operators for objects
    int a=5, b=6, c;
    c = a + b;
    c = a - b;

    Circle c1(5), c2(6), c3;  // variable of type of object class

    c3 = c1 + c2;  //
    return 0;
}
