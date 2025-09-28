/* C++ Function To Count Set Bits (Number Of 1 bits) In An Integer */

#include<iostream>
using namespace std;
int Count_Set_Bit(int num){
    int count = 0;
    while(num != 0){
        if(num & 1 == 1){
            count++;
        }
        num = num >> 1;
    }
    return count;
}
int main(){
    int num;
    cout<< "Enter The Number: ";
    cin>> num;
    int count = Count_Set_Bit(num);
    cout<< "Total Count Of Set Bits Of " << num << " = " << count;
}