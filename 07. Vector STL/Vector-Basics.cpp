/* Vector: Vectors Are Sequence Containers Representing Dynamic Arrays */

#include<iostream>
#include<vector>
using namespace std;

// Method 1: Printing The vactor Using Array Syntax
void PrintVector_1(vector<int>v){
    int size = v.size();
    for(int i = 0; i < size; i++){
        cout<< v[i] << '\t';
    }
    return;
}

// Method 2: Printing The vactor Using at() 
void PrintVector_2(vector<int>v){
    int size = v.size();
    for(int i = 0; i < size; i++){
        cout<< v.at(i) << '\t';
    }
    return;
}

// Method 3: Printing The Vector Using For Each Loop
void PrintVector_3(vector<int>v){
    for(auto it: v){
        cout<< it << '\t';
    }
}

int main(){

    // Declaration Of Vector
    vector<int>v;
    vector<int>arr(5);    // We Can Mention The Initial Size Of Vector If We Want. Intially It Will Store 0's.

    // Initialization Of Vector
    vector<int>a(5, 1);   // Initially A 5 Size Vector Will Be Created And Its Store All 1's In 5 Places.

    vector<int>b = {1, 2, 3, 4, 5};  // Initialization Using Array Syntax

    b.push_back(6);  // We Can Pass Values One By One Using  Syntax: array_name.push_back(element_value)

    // Taking Input In Vector
    int n;
    cout<< "Enter The Number Of Elements In Vector v: ";
    cin>> n;
    cout<< "Enter The Elements In Vector v: " <<endl;
    for(int i = 0; i < n; i++){
        int d;
        cin>> d;
        v.push_back(d);
    }

    // Print The Vector
    cout<< "The Vector v Is: " <<endl;
    PrintVector_1(v);

    // Push Another Element 
    v.push_back(80);
    cout<<endl<< "After Pusing An Element The Vector Will Be: " <<endl;
    PrintVector_2(v);

    // Pop An Element
    v.pop_back();
    cout<<endl<< "After Poping An Element The Vector Will Be: " <<endl;
    PrintVector_3(v);

    // Front And Back Element Of An Vector
    cout<<endl<< "Front Element Of Vector v: " << v.front() <<endl;
    cout<< "Back Element Of Vector v: " << v.back() <<endl;
    cout<< "The Vector Capacity = " << v.capacity() << " , Size = " << v.size() <<endl;

    // Clear The Vector
    v.clear();
    cout<< "After Clearning The Vector, Capacity = " << v.capacity() << " , Size = " << v.size() <<endl;
}