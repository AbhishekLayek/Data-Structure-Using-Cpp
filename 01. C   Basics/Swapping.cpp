// C++ Program To Swap Two Numbers

#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<< "Before Swapping: " <<endl;
    cout<< "num1 = ";
    cin>> num1;
    cout<< "num2 = ";
    cin>> num2;
    cout<< "After Swapping: " <<endl;

    // 1st Way: Using Temporary or A Third variable
/*  int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
*/

    // 2nd Way: Without A Third Variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout<< "num1 = " << num1 <<endl;
    cout<< "num2 = " << num2 <<endl;
}