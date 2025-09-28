/* Multiple Inheritence: A Single Class Inherited From More Than One Base Class */

#include<iostream>
using namespace std;

// 1st Base Class Or Parent Class

class Vehical{
    public:
        void vehical(){
            cout<< "It Is A Vehical." << endl;
        }
};

// 2nd Base Class Or Parent Class

class Fourwheeler{
    public:
        void fourwheeler(){
            cout<< "It Has Four Wheels." <<endl;
        }
};

// Derived Class Or Child Class 

class Car: public Vehical, public Fourwheeler{
    public:
        void car(){
            cout<< "This Is A Car." <<endl;
        }
};

int main(){
    Car c;
    c.car();
    c.vehical();
    c.fourwheeler();
}