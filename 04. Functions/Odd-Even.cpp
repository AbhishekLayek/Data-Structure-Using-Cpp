/* C++ Function To Check Whether A Number Is Odd Or Even */

#include<iostream>
using namespace std;
// General Method To Check Whetehr A Number Is Odd Or Even
void OddEven(int num){
    if(num % 2 == 0){
        cout<< num << " Is Even";
    }
    else{
        cout<< num << " Is Odd";
    }
    return;
}
// Bitwise Method To Check Whetehr A Number Is Odd Or Even
void OddEven_Bitwise(int num){
    if(num & 1 == 1){
        cout<< num << " Is Odd";
    }
    else{
        cout<< num << " Is Even";
    }
}
int main(){
    int num;
    cout<< "Enter The Number: ";
    cin>> num;
 // OddEven(num);
    OddEven_Bitwise(num);

}