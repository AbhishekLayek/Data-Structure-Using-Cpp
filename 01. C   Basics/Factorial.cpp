// C++ Program To Calculate Factorial Of A Given Number 

#include<iostream>
using namespace std;
int main(){
    int n, fact = 1;
    cout<< "Enter The Number = ";
    cin>> n;

    // 1st Way: n! = 1 * 2 * 3 * ... * (n-2) * (n-1) * n

/*  for(int i = 1; i <= num; i++){
        fact = fact * i;
    }
*/ 
    cout<< "Factorial Of " << n << " = ";

    // 2nd Way: n! = n * (n-1) * (n-2) * ... * 3 * 2 * 1

    for(; n >= 1; n--){
        fact = fact * n;
    }
    cout<< fact;
}