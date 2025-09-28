/* Moving All Negative Number To The Left Side Of The Array */

#include<iostream>
#include<utility>
using namespace std;

// Printing Array
void Print_Array(int size, int arr[]){
    for(int i = 0; i < size; i++){
        cout<< arr[i] << '\t';
    }
    return;
}

// Moving All Negative Numbers To Left Side
void Move_Negative(int size, int arr[]){
    // index i will traverse the whole array while index j will store the negative numbers
    for(int i = 0, j = 0; i < size; ){
        if(arr[i] < 0){
            swap(arr[i] , arr[j]);
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    return;
}

int main(){
    int size;
    cout<< "Enter The Size Of The Array: ";
    cin>> size;
    int *arr = new int[size];
    cout<< "Enter Elements: "<<endl;
    for(int i = 0; i < size; i++){
        cin>> arr[i];
    }
    cout<<"The Array Is: "<<endl;
    Print_Array(size, arr);
    Move_Negative(size, arr);
    cout<<endl<< "After Moving All Negative Numbers To Left Side, The Array: "<<endl;
    Print_Array(size, arr);
}