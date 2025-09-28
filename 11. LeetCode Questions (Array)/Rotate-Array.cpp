/* Rotate The Array To The Right By k Steps */

#include<iostream>
#include<utility>
#include<vector>
using namespace std;

void Print_Vector(vector<int>v){
    for(int i = 0; i < v.size(); i++){
        cout<< v[i] << '\t';
    }
    return;
}

// Method 1: Modulus Approach 

void Rotate_Array_1(vector<int>&v, int k){
    int size = v.size();
    vector<int>ans(size);
    for(int i = 0; i < size; i++){
        int index = (i + k) % size;
        ans[index] = v[i];
    }
    v = ans;
    return;
}

// Reverse Function
void Reverse(vector<int>&v, int left, int right){
    for(; left <= right; left++, right--){
        swap(v[left] , v[right]);
    }
    return;
}

// Method 2: Reversal Approach

void Rotate_Array_2(vector<int>&v, int k){
    int size = v.size();
    Reverse(v, 0, (size - 1));    // Reverse The Array From 0 to (size - 1)
    Reverse(v, 0, (k - 1));      // Reverse The Array From 0 to (k - 1)
    Reverse(v, k, (size - 1));  // Reverse The Array From k to (size - 1)
    return;
}

int main(){
    int n, k;
    vector<int>v;
    cout<< "Enter The Number Of Elements You Want To Insert In Array: ";
    cin>>n;
    cout<< "Enter Elements: "<<endl;
    for(int i = 0; i < n; i++){
        int d;
        cin>>d;
        v.push_back(d);
    }
    cout<< "The Array Is: "<<endl;
    Print_Vector(v);
    cout<<endl<< "Enter The Number Of Times You Want To Rotate The Array: ";
    cin>> k;
    // Rotate_Array_1(v, k);
    Rotate_Array_2(v, k);
    cout<< "After Rotation Of " << k << " Times The Array: "<<endl;
    Print_Vector(v);
}