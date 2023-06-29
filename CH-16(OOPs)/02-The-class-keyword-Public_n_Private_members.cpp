#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
 /* 

    Before writing a class to represent a thing, be sure about what are the properties and behavoir that you are going to include for the class.

    For example Car Class, just to make it simple, we consider there is color, speed as properties and startEngine, stopEngine, acceleration, applyBrakes as behaviour

    We can add more proprties and behavour to make the car class more general flexible and nearer to real world car. For the beginning this will be fine to limit ourself only these freatures.
*/


/* We have 3 section in the body of Class 
ie 

1>> Private 
2>> Public 
3>> Protected Section  

*/

class Car{

    private:
       string color;

    public:
        void acceleration(); // We do not actualy write the implementation here in place within the class we do that seperatly outside of the class 
        //! but sometimes when the methods are real simple that does not have any kind of complex coding we prefer to write implementation in the class   
        void applyBreak();
        int getSpeed();
};
// In order to implement the methods outside of the class then we will use :: belongs to or scope resultion operator 

void Car::acceleration(){
    speed += 10;
};

void Car::applyBreak(){
    speed -= 8;

}

int Car::getSpeed(){
    return speed();
}

int main(){

    Car car1, car2; // Creating objects of the class 

    car1.acceleration();  // Thats the way to apply the method on an object but its only going to work on thoese object on which method is called

    car2.acceleration();

// to apply a method on object SYNTAX ==>>   object_name.method_name;
    car2.acceleration();
    return 0;
}