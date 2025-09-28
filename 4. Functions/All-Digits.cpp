/* C++ Function To Print All Digits Of An Integer */

#include<iostream>
using namespace std;
void Print_All_Digit(int num){
    while(num > 0){
        int digit = (num % 10);
        cout<< digit << "  ";
        num = (num / 10);
    }
    return;
}
int main(){
    int num;
    cout<< "Enter The Number: ";
    cin>> num;
    cout<< "All Digits Of " << num << " Is: "<<endl;
    Print_All_Digit(num);
}