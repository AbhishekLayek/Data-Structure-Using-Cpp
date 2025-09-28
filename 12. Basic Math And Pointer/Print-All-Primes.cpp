/* Print All Primes Less Than n Using Seive Of Eratosthenes */

#include<iostream>
#include<vector>
using namespace std;

// Seive Of Eratosthenes
// Time Complexity: O(nlog(log n))

vector<bool> Seive_Of_Eratosthenes(int n){
    vector<bool>prime(n, true);
    prime[0] = prime[1] = false;
    for(int i = 2; i < n; i++){
        if(prime[i]){
            for(int j = i * 2; j < n; j += 2){
                prime[j] = false;
            }
        }
    }
    return prime;
}

// Optimized Seive Of Eratosthenes

vector<bool> Optimized_Seive_Of_Eratosthenes(int n){
    vector<bool>prime(n, true);
    prime[0] = prime[1] = false;
    // Optimization 2: We Run The Outer Loop From 2 To sqrt(n). Here i*i < n Is Equivalent To i < sqrt(n).
    for(int i = 2; i*i < n; i++){
        if(prime[i]){
            // Optimization 1: We Can Start j From (i*i)
            for(int j = i * i; j < n; j += 2){
                prime[j] = false;
            }
        }
    }
    return prime;
}

int main(){
    int n;
    cout<< "Enter The Range: ";
    cin>> n;
    vector<bool>seive;
    // seive = Seive_Of_Eratosthenes(n);
    seive = Optimized_Seive_Of_Eratosthenes(n);
    cout<< "All Prime Numbers Less Than " << n << " Are: "<<endl;
    for(int i = 0; i < n; i++){
        if(seive[i]){
            cout<< i << " ";
        }
    }
}
