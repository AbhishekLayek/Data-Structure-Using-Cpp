/* Pointer: Pointers Are Special Type Of Variables That Stores Address Of Other Variables. */

#include<iostream>
using namespace std;
int main(){
    int a = 10;
    cout<< "Value Of a: " << a <<endl;
    cout<< "Address Of a: " << addressof(a) <<endl;

    // Pointer Creation

    int* ptr = &a;  // ptr Is A Pointer To Integer Variable a.

    // Access 
    // * Is Dereferrence Operator
    // *ptr : Step 1: Go To The Location Stored In ptr, Step 2: Print The Value Stored In The Address.

    cout<< "Value Stored In " << ptr << " : " << *ptr <<endl; 
}