/* Inheritence: The capability Of A Class To Derive Properties & Behaviors From Another Class Is Called Inheritence */

#include<iostream>
using namespace std;

// Super Class Or Parent Class Or Base Class
class Animal{
    public:
        // Propertis Or Attributes
        int age;
        int weight;
        int legs;
        string color;

        // Behaviors Or Methods
        void eat(){
            cout<< "Eating" <<endl;
        }
        void sleep(){
            cout<< "Sleeping" <<endl;
        }
};

// Sub Class Or Child Class Or Derived Class

class Dog: public Animal{
    public:
        void bark(){
            cout<< "Barking" <<endl;
        }

        // Parametarized constructor
        Dog(int age, int weight, int legs, string color){
            this->age = age;
            this->weight = weight;
            this->legs = legs;
            this->color = color;
        }
};

class Lion: public Animal{
    public:
        void roar(){
            cout<< "Roaring" <<endl;
        }

        // Parametarized constructor
        Lion(int age, int weight, int legs, string color){
            this->age = age;
            this->weight = weight;
            this->legs = legs;
            this->color = color;
        }
};

int main(){
    Dog spike(5, 20, 4, "White");
    cout<< "Color Of spike: " << spike.color <<endl;
    cout<< "spike Is ";
    spike.bark();

    Lion simba(10, 50, 4, "Brown");
    cout<< "Color Of simba: " << simba.color <<endl;
    cout<< "simba Is ";
    simba.roar();
}