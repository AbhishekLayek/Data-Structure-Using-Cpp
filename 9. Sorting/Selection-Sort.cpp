/* Selection Sort */

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

// Function Of Selection Sort
void Selection_Sort(vector<int>&v){
    int n = v.size();

    // Outer Loop
    for(int i = 0; i < (n - 1); i++){
        // Inner Loop
        int min_index = i;
        for(int j = (i + 1); j < n; j++){
            if(v[j] < v[min_index]){
                min_index = j;
            }
        }
        swap(v[i] , v[min_index]);
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
    Selection_Sort(v);
    cout<<endl<< "After Performing Selection Sort The Array Is: "<<endl;
    Print_Vector(v);
}