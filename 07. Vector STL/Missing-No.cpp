/* Find Missing Number In An Array */

#include<iostream>
#include<vector>
using namespace std;

void Print_Vector(vector<int>v){
    for(int i = 0; i < v.size(); i++){
        cout<< v[i] << '\t';
    }
    return;
}

// Method 1: Using Sum Approach

int Find_Missing_1(vector<int>v, int n){
    int size = v.size(), sum = 0, missing;
    for(int i = 0; i < size; i++){
        sum = sum + v[i];
    }
    int total_sum = (n * (n + 1)) / 2;
    missing = total_sum - sum;
    return missing;
}

// Method 2: Using XOR Approach

int Find_Missing_2(vector<int>v, int n){
    int size = v.size(), element_xor = 0, total_xor = 0;
    for(int i = 0; i < size; i++){
        element_xor = element_xor ^ v[i];
    }
    for(int i = 1; i <= n; i++){
        total_xor = total_xor ^ i;
    }
    int missing = total_xor ^ element_xor;
    return missing;
}

int main(){
    int n;
    vector<int>v;
    cout<< "Enter The Number Of Elements: ";
    cin>> n;
    cout<< "Enter Elements: "<<endl;
    for(int i = 0; i < (n - 1); i++){
        int d;
        cin>> d;
        v.push_back(d);
    }
    cout<< "The Array Is: "<<endl;
    Print_Vector(v);
    // cout<<endl<< "Missing Element = " << Find_Missing_1(v, n);
    cout<<endl<< "Missing Element = " << Find_Missing_2(v, n);
}