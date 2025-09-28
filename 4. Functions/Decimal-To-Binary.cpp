/* C++ Function To Convert A Decimal Number To Its Corresponding Binary Number */

#include<iostream>
#include<cmath>
using namespace std;
// General Method To Convert A Decimal Number To Binary
int Decimal_To_Binary_1(int decimal){
    int bit, binary = 0;
    for(int i = 0; decimal > 0; i++){
        bit = (decimal % 2);
        binary = (bit * pow(10 , i)) + binary;
        decimal = (decimal / 2);
    }
    return binary;
}
// Bitwise Method To Convert A Decimal Number To Binary
int Decimal_To_Binary_2(int decimal){
    int bit, binary = 0;
    for(int i = 0; decimal > 0; i++){
        bit = (decimal & 1);
        binary = (bit * pow(10 , i)) + binary;
        decimal = (decimal >> 1);
    }
    return binary;
}
int main(){
    int decimal;
    cout<< "Enter The Decimal Number: ";
    cin>> decimal;
 // int binary = Decimal_To_Binary_1(decimal);
    int binary = Decimal_To_Binary_2(decimal);
    cout<< "Binary Of " << decimal << " = " << binary;
}