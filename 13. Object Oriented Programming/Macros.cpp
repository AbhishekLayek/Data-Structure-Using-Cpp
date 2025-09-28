/* Macros */

#include<iostream>
using namespace std;

#define PI 3.14159265359
#define MAX(a, b) (a>b ? a : b)

void Circle_Area(float r){
    cout<< "Area Of Circle = " << (PI * r * r) <<endl;
}

void Circle_Perimeter(float r){
    cout<< "Perimeter Of Circle = " << (2 * PI * r) <<endl;
}

int main(){
    float r;
    cout<< "Enter The radius Of Circle: ";
    cin>> r;
    Circle_Area(r);
    Circle_Perimeter(r);

    int a, b;
    cout<< "Enter a = ";
    cin>> a;
    cout<< "Enter b = ";
    cin>> b;
    cout<< "Max = " << MAX(a, b);
}