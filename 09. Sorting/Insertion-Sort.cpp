/* Insertion Sort */

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

// Function Of Insertion Sort
void Insertion_Sort(vector<int>&v){
    int n = v.size();

    // Outer Loop
    for(int i = 1; i < n; i++){
        int key = v[i];
        int j = (i - 1);
        // Inner Loop
        while(j >= 0 && v[j] > key){
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
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
    Insertion_Sort(v);
    cout<<endl<< "After Performing Insertion Sort The Array Is: "<<endl;
    Print_Vector(v);
}