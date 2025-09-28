/* C++ Function To Calculate Factorial Of A Number */

#include<iostream>
using namespace std;
int Factorial(int num){
    int fact = 1;
    for(; num >= 1; num--){
        fact = fact * num;
    }
    return fact;
}
int main(){
    int num;
    cout<< "Enter The Number: ";
    cin>> num;
    int fact = Factorial(num);
    cout<< "Factorial Of " << num << " = " << fact;
}