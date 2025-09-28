// C++ Program To Check Whether A Number Is Even Or Odd

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter The Number: ";
    cin>> n;
    if(n % 2 == 0){
        cout<< "The Number Is Even";
    }
    else{
        cout<< "The Number Is Odd";
    }
}