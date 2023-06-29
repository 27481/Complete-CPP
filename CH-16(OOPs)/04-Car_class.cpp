#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Car
{

private:
    string color;
    int speed;
    bool isEngineOn;

public:
    Car();
    Car(string c); // declaration of constructor in the public section which has string type argument


    void acceleration();
    void applyBreak();
    int getSpeed();
    void startEngine();
    void stopEngine();
    string toString();
};
// In general we have properties as private and behaviours(functions) as class 
Car::Car(string c)
    {
        color = c;
        speed = 0;
        isEngineOn = false;
    }


void Car::startEngine()
{
    if (!isEngineOn)
    isEngineOn = true;
    
}

void Car::stopEngine()
{
    if (isEngineOn)
    {
        isEngineOn = false;
        speed = 0;
    }
}  
void Car::acceleration(){
    speed += 10;
    if (isEngineOn)
      speed += 10;
}

void Car::applyBreak(){
    if(speed - 8 >= 0)
    speed -= 8;
    else 
    speed=0;
}

string Car::toString(){
    ostringstream oss;
    oss << "color of the Car:" << color <<endl;
    if(isEngineOn)
      oss <<"Engine is off" << endl;
    else
     oss << "Engine is off" <<endl;
    return oss.str();
}

int Car::getSpeed(){
    return speed;
}

int main()
{
    Car car1, car2("Red");    // Objects of Car  each of these car object will contains color as a string , speed as int , isEngineOn as Bool 
    // These properties exists only for an instance if we do not allocate any object then these properties does not exits 
    // since these members only exits and works for an object So they are called instance members that is true for the methods as well
    //  we can only execute a method like acceleration or apply bricks using a car instance like car1 car2 car3
    // We can not call the acceleration method without a car object so These methods are instance method as well 

    // In order to call it a instance member method we always need an object so to accelerate car1 we need to call the acceleration method  using car1 dot operator like car1.acceleration()

    cout << car1.toString() <<endl;
    car1.startEngine(); 
    cout<< car1.toString() <<endl;

    cout << car2.toString() <<endl;

    cout << car2.toString() <<endl;
    car2.startEngine();

    car1.acceleration();
    car2.acceleration();

    car1.applyBreak();
    cout << car1.toString() <<endl;



    return 0;
} 