/* C++ Function To Convert A Binary Number To Its Corresponding Decimal Number */

#include<iostream>
#include<cmath>
using namespace std;
int Binary_To_Decimal(int binary){
    int digit, decimal = 0;
    for(int i = 0; binary > 0; i++){
        digit = (binary % 10);
        decimal = (digit * pow(2 , i)) + decimal;
        binary = (binary / 10);
    }
    return decimal;
}
int main(){
    int binary;
    cout<< "Enter The Binary Number: ";
    cin>> binary;
    int decimal = Binary_To_Decimal(binary);
    cout<< "Decimal Of " << binary << " = " << decimal;
}