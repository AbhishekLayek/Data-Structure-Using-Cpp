/* Compile-Time Polymorphism Or Static Polymorphism */

#include<iostream>
using namespace std;

class Polymorph{
    int x, y;

    public:
        
        /* Function Overloading */ 

        // Default Constructor
        Polymorph(){
            cout<< "Default ctor Called" <<endl;
        }

        // Parametarized Constructor
        Polymorph(int x, int y){
            this->x = x;
            this->y = y;
        }

        int add(int a, int b){
            return (a + b);
        }

        int add(int a, int b, int c){
            return(a + b + c);
        }

        double add(double a, double b){
            return (a + b);
        }

        /* Operator Overloading */

        void operator+ (const Polymorph &srcobj){
            this->x = this->x + srcobj.x;
            this->y = this->y + srcobj.y;
        }

        void display(){
            cout<< "x: " << x << " " << "y: " << y;
        }
};

int main(){
    Polymorph p;
    cout<< p.add(4, 5) <<endl;
    cout<< p.add(4, 5, 6) <<endl;
    cout<< p.add(5.2, 6.7) <<endl;

    Polymorph p1(3, 4);
    Polymorph p2(5, 6);

    p1 + p2;
    p1.display();
}