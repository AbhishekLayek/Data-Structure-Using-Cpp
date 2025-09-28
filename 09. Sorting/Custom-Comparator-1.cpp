/* Custom Comparator */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Print_Vector(vector<int>&v){
    for(int i = 0; i < v.size(); i++){
        cout<< v[i] << '\t';
    }
    return;
}

// Custom Comparator

bool myComp(int &a, int &b){
    // return a < b;  // Sort In Ascending Order
    return a > b;    // Sort In Descending Order
}

int main(){
    vector<int>v;
    int n;
    cout<< "Enter The Size Of The Array: ";
    cin>> n;
    cout<< "Enter Elements: "<<endl;
    for(int i = 0; i < n; i++){
        int d;
        cin>> d;
        v.push_back(d);
    }
    cout<<endl<< "The Array Is: "<<endl;
    Print_Vector(v);

    // Sort In Ascending Order
    // sort(v.begin(), v.end());

    // To Sort In Descending Order We Have To Use A Comparator
    sort(v.begin(), v.end(), myComp);

    cout<<endl<< "After Sorting: "<<endl;
    Print_Vector(v);
}