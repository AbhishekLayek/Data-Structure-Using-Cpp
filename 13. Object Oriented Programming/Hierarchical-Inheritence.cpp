/* Hierarchical Inheritence: More Than One Subclass Is Inherited From A Single Base Class */

#include<iostream>
using namespace std;

// Base Class Or parent Class

class Vehical{
    public:
        void vehical(){
            cout<< "It Is A Vehical." << endl;
        }
};

// 1st Derived Class Or Child Class: Inherited From Vehical Class

class Car: public Vehical{
    public:
        void car(){
            cout<< "This Is A car. ";
        }
};

// 2nd Derived Class Or Child Class: Inherited From Vehical Class

class Bus: public Vehical{
    public:
        void bus(){
            cout<< "This Is A Bus. ";
        }
};

int main(){
    Car c;
    c.car();
    c.vehical();

    Bus b;
    b.bus();
    b.vehical();
}