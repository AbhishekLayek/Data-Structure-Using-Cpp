/* C++ Function To Reverse An Array */

#include<iostream>
#include<utility>
using namespace std;

// Print Array

void Print_Array(int size, int arr[]){
    for(int i = 0; i < size; i++){
        cout<< arr[i] << '\t';
    }
}

// Method1: Reverse An Array Using Swap Function

void Reverse_Array_1(int size, int arr[]){
    for(int left = 0, right = (size - 1); left < right; left++, right--){
        swap(arr[left] , arr[right]);
    }
    cout<<endl << "Array After Reversing: " << endl;
    Print_Array(size, arr);
    return;
}
// Method2: Reverse An Array Without Using Swap Function

void Reverse_Array_2(int size, int arr[]){
    for(int left = 0, right = (size - 1); left < right; left++, right--){
        arr[left] = arr[left] + arr[right];
        arr[right] = arr[left] - arr[right];
        arr[left] = arr[left] - arr[right];
    }
    cout<<endl << "Array After Reversing: " << endl;
    Print_Array(size, arr);
    return;
}
int main(){
    int size = 5, arr[5];
    cout<< "Enter The values: " <<endl;
    for(int i = 0; i < size; i++){
        cin>> arr[i];
    }
    cout<< "The Array Is: " <<endl;
    Print_Array(size, arr);
    // Reverse_Array_1(size, arr);
    Reverse_Array_2(size, arr);
}