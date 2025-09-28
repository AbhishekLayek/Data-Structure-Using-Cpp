/* C++ Function To Reverse An Integer */

#include<iostream>
using namespace std;
int Reverse_Integer(int num){
    int digit, reverse = 0;
    while(num != 0){
        digit = (num % 10);
        reverse = (reverse * 10) + digit;
        num = (num / 10);
    }
    return reverse;
}
int main(){
    int num;
    cout<< "Enter The Integer: ";
    cin>> num;
    int reverse = Reverse_Integer(num);
    cout<< "Reverse Of " << num << " Is: " << reverse;
}