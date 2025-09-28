// C++ Program To Calculate Simple Interest

#include<iostream>
using namespace std;
int main(){
    int p, t;
    float r, si;
    cout<< "Principal Amount: ";
    cin>> p;
    cout<< "Rate of Interest: ";
    cin>> r;
    cout<< "Time: ";
    cin>> t;
    si = (p * r * t)/100;
    cout<< "Simple Interest = " << si;
}