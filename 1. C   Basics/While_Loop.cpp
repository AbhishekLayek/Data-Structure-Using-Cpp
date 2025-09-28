// C++ Program To Print 1 To n Natural Numbers Using While Loop

#include<iostream>
using namespace std;
int main(){
    int n, i = 1;
    cout<< "Enter The Value of n = ";
    cin>> n;
    
    // While Loop
    while(i <= n){
        cout<< i << '\t';
        i = i + 1;
    }
}