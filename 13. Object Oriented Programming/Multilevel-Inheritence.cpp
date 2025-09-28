/* Multilevel Inheritence: One Derived Class Inherited Another Derived Class (A Chain Of Inheritence Is Created) */

#include<iostream>
using namespace std;

// Base Class

class Vehicle{
    public:
        void vehicle(){
            cout<< "This Is A Vehicle" <<endl;
        }
};

// Fourwheeler Class Inherited From Vehicle Class

class Fourwheeler: public Vehicle{
    public:
        void fourwheeler(){
            cout<< "Fourwheelers Are Vehicle" <<endl;
        }
};

// Car Class Inherited From Fourwheeler Class

class Car: public Fourwheeler{
    public:
        void car(){
            cout<< "Cars Having Four Wheels" <<endl;
        }
};

int main(){
    Car c;
    c.vehicle();
    c.fourwheeler();
    c.car();
}