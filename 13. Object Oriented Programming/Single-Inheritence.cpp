/* Single Inheritence: A Class Is Inherited From Only One Base Class */

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
            cout<< "Eating..." <<endl;
        }
        void sleep(){
            cout<< "Sleeping..." <<endl;
        }
};

// Sub Class Or Child Class Or Derived Class

class Dog: public Animal{
    public:
        void bark(){
            cout<< "Barking..." <<endl;
        }

        // Parametarized constructor
        Dog(int age, int weight, int legs, string color){
            this->age = age;
            this->weight = weight;
            this->legs = legs;
            this->color = color;
        }
};

int main(){
    Dog spike(5, 20, 4, "White");
    cout<< "Spike Is: " <<endl;
    spike.eat();
    spike.sleep();
    spike.bark();
}