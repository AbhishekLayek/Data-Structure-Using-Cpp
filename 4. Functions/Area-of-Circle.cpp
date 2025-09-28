/* C++ Function To Display Area Of Circle */

#include<iostream>
#include<cmath>
using namespace std;
float Area_Circle(float radius){
    float area = 3.14 * pow(radius , 2);
    return area;
}
int main(){
    float radius;
    cout<< "Enter The Radius Of The Circle: ";
    cin>> radius;
    float area = Area_Circle(radius);
    cout<< "The Area Of Circle = " << area << " Sq. Unit";
}
