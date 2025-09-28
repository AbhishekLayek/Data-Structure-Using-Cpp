// C++ Program To Print 1 To n Natural Numbers Using For Loop

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter The Value of n = ";
    cin>> n;

    //For Loop
    for(int i = 1; i <= n; i++){
        cout<< i << '\t';
    }
}