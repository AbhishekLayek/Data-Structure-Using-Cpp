/* Find GCD/HCF And LCM Of Two Given Numbers */

#include<iostream>
using namespace std;

int GCD(int a, int b){
    if(a == 0){
        return b;
    }
    if(b == 0){
        return a;
    }
    while(a > 0 && b > 0){
        if(a > b){
            a = a - b;
        }
        else{
            b = b - a;
        }
    }
    return a ? a : b;
}

int main(){
    int a, b;
    cout<< "Enter a: ";
    cin>> a;
    cout<< "Enter b: ";
    cin>> b;
    int gcd = GCD(a, b);
    int lcm = (a * b) / gcd;
    cout<< "GCD Of " << a << " & " << b << " Is: " << gcd <<endl;
    cout<< "LCM Of " << a << " & " << b << " Is: " << lcm;
}