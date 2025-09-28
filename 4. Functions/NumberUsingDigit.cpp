/* C++ Function To Return A Number Using Digits */

#include<iostream>
using namespace std;
int Number_Using_Digit(int n){
    int digit, number = 0;
    cout<< "Enter The Digits: " <<endl;
    for(int i = 1; i <= n; i++){
        cin>> digit;
        number = (number * 10) + digit;
    }
    return number;
}
int main(){
    int n;
    cout<< "Enter The Number Of Digits: ";
    cin>> n;
    int number = Number_Using_Digit(n);
    cout<< "Number = " << number;
}