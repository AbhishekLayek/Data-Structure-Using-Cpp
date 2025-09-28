/* C++ Function To Shift A Element By 1 Position */

#include<iostream>
using namespace std;
// Print Array

void Print_Array(int size, int arr[]){
    for(int i = 0; i < size; i++){
        cout<< arr[i] << '\t';
    }
}

// Right Shift Element By 1 Position

void Array_RightShift(int size, int arr[]){
    int temp = arr[size - 1];
    for(int index = size - 1; index > 0; index--){
        arr[index] = arr[index - 1];
    }
    arr[0] = temp;
    return;
}

// Left Shift Element By 1 Position

void Array_LeftShift(int size, int arr[]){
    int temp = arr[0];
    for(int index = 0; index < size; index++){
        arr[index] = arr[index + 1];
    }
    arr[size - 1] = temp;
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
    Array_RightShift(size, arr);
    // Array_LeftShift(size, arr);
    cout<<endl << "After Shifting The Array By 1 Position: " <<endl;
    Print_Array(size, arr);
}