#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

// Constructor method for class ===>> A constructor is a memeber method of a class having same name as the class name and they are always are called when we creat an object of the class 
//  Witout a constructor its not possible to construct an object 
// If we do not write any constructor then compiler is going to write a default constructor in order to facilitate the object creation  

class Car{

        private:
            string color;
            int speed;

        public:
        Car(){  // A constructor , Now all car objects created will have color "Gray" and speed = 0, as all objects will use this only constructor 

            color = "Grey";
            speed = 0;            
        }
        Car(string c){
            color = c;
            speed = 0;
        }
        Car(string c, int sp){
            color = c;
            speed = sp;
        }
        void accelareation();
        void applyBreakes();
        int getSpeed();

    };
//* So constructors are going to give me an opportunity to define various ways of object creation 

// If we do not write any constructor then compiler is going to write a default constructor in order to facilitate the object creation 

int main(){
    // Without a constructor its not possible to construct an object

    //  Constructors are called only once in the lifetime of an object and that is during the creation of the object
    // A constructor can not have a return type its illegal



    Car car1, car2("Red"), car3("Blue"), car4("Orange", 15);


    car1.accelareation();
    car2.accelareation();

    
    return 0;
}
  