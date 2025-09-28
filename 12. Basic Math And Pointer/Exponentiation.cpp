/* Exponentiation */

#include<iostream>
using namespace std;

// Method 1: Slow Exponentiation

long long int Slow_Exponentiation(long long int a, long long int b){
    long long int ans = 1;
    for(int i = 0; i < b; i++){
        ans = ans * a;
    }
    return ans;
}

// method 2: Fast Exponentiation

long long int Fast_Exponentiation(long long int a, long long int b){
    long long int ans = 1;
    while(b > 0){
        // If b Is Odd
        if(b & 1){
            ans = ans * a;
        }
        a = a*a;
        b = b/2;
    }
    return ans;
}

int main(){
    long long int a, b;
    cout<< "Enter a: ";
    cin>> a;
    cout<< "Enter b: ";
    cin>> b;
    // int ans = Slow_Exponentiation(a, b);
    long long int ans = Fast_Exponentiation(a, b);
    cout<< "Exponentaition = " << ans;
}