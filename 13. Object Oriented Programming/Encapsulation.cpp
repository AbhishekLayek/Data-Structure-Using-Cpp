/* Encapsulation: Binding Data Members And Member Functions Together */

#include<iostream>
using namespace std;

// Class Is A Example Of Encapsulation

class Rectangle{
    public:

        // Data Members Or Variables
        int length;
        int breadth;

        // Constructor
        Rectangle(int length, int breadth){
            this->length = length;
            this->breadth = breadth;
        }

        // Member Functions Or Methods
        int Area_Of_Rectangle(){
            return (length * breadth);
        }

        int Perimeter_Of_Rectangle(){
            return (2 * (length + breadth));
        }
};

int main(){
    int l, b;
    cout<< "Enter The Length Of Rectangle: ";
    cin>> l;
    cout<< "Enter The breadth Of Rectangle: ";
    cin>> b;
    Rectangle r(l, b);
    cout<< "Area Of Rectangle Is: " << r.Area_Of_Rectangle() <<endl;
    cout<< "Perimeter Of Rectangle Is: " << r.Perimeter_Of_Rectangle();
}