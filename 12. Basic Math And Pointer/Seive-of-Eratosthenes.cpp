/* Count All Prime NUmbers Less Than n Using Seive Of Eratosthenes Approach */

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

// Seive Of Eratosthenes
// Time Complexity: O(nlog(log n))

int Seive_Of_Eratosthenes(int n){
    vector<bool>seive(n, true);
    seive[0] = seive[1] = false;
    int count = 0;
    for(int i = 2; i < n; i++){
        if(seive[i]){
            count++;
            for(int j = i * 2; j < n; j += i){
                seive[j] = false;
            }
        }
    }
    return count;
}

// Optimized Seive Of Eratosthenes

int Optimized_Seive_Of_Eratosthenes(int n){
    vector<bool>seive(n, true);
    seive[0] = seive[1] = false;
    int count = 0;
    for(int i = 2; i < n; i++){
        if(seive[i]){
            count++;
            // Optimization 1: We Can Start j With (i * i)
            for(int j = i * i; j < n; j += i){
                seive[j] = false;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cout<< "Enter The Range: ";
    cin>> n;
    // int count = Seive_Of_Eratosthenes(n);
    int count = Optimized_Seive_Of_Eratosthenes(n);
    cout<< "Count Of All Prime NUmbers Less Than " << n << " Is = " << count;
}