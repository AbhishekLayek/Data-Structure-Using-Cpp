/* Bubble Sort */

#include<iostream>
#include<vector>
#include<utility>
using namespace std;

// Printing The Array
void Print_Vector(vector<int>v){
    for(int i = 0; i < v.size(); i++){
        cout<< v[i] << '\t';
    }
    return;
}

// Function Of Bubble Sort
void Bubble_Sort(vector<int>&v){
    int n = v.size();

    // Outer Loop
    for(int i = 0; i < (n - 1); i++){
        // Inner Loop
        for(int j = 0; j < (n - i - 1); j++){
            if(v[j] > v[j + 1]){
                swap(v[j] , v[j + 1]);
            }
        }
    }
    return;
}


int main(){
    int size;
    vector<int>v;
    cout<< "Enter The Size Of The Array: ";
    cin>> size;
    cout<< "Enter Elements: "<<endl;
    for(int i = 0; i < size; i++){
        int d;
        cin>> d;
        v.push_back(d);
    }
    cout<< "The Array Is: "<<endl;
    Print_Vector(v);
    Bubble_Sort(v);
    cout<<endl<< "After Performing Bubble Sort The Array Is: "<<endl;
    Print_Vector(v);
}