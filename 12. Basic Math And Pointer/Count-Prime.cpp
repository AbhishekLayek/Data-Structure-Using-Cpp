/* Count All Prime Numbers Less Than n */

#include<iostream>
#include<cmath>
using namespace std;

// Method 1: Naive Approach
// Time Complexity: O(n)
bool Check_Prime1(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

// Method 2: Sqrt Approach
// Time Complexity: O(√n)
bool Check_Prime2(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n, count = 0;
    cout<< "Enter The Range: ";
    cin>> n;
    for(int i = 2; i < n; i++){
        if(Check_Prime2(i)){
            count++;
        }
    }
    cout<< "Total Count Of Prime Numbers Less Than " << n << " Is = " << count;
}