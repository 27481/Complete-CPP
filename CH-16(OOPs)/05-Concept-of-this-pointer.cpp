#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// This opinter within the method that always holds the address of current object by the object by which the method has been invoked or called 
class Car
{

private:
    string color;
    int speed;
    bool isEngineOn;

public:
    Car();
    Car(string c);


    void acceleration();
    void applyBreak();
    int getSpeed();
    void startEngine();
    void stopEngine();
    string toString();
};


Car::Car(string color)
    {
        this->color = color;   // Instance member of the class 
        speed = 0;
        isEngineOn = false;
    }


void Car::startEngine()
{
    if (!this->isEngineOn)
      this->isEngineOn = true;
    
}

void Car::stopEngine()
{
    if (this->isEngineOn)
    {
        this->isEngineOn = false;
        this->speed = 0;
    }
}  
void Car::acceleration(){
    speed += 10;
    if (isEngineOn)
      speed += 10;
}

void Car::applyBreak(){
    if(this->speed - 8 >= 0)
    this->speed -= 8;
    else 
    this->speed=0;
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

Car::Car(){
    this->color = "Gray";
    this->speed = 0;
    this->isEngineOn = false;
}

int Car::getSpeed(){
    return this->speed;
}

int main()
{
    Car car1, car2("Red");    // Objects of Car  each of these car object will contains color as a string , speed as int , isEngineOn as Bool 
   
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