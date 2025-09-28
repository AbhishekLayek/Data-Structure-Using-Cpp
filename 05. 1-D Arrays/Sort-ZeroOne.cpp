/* C++ Function To Sort Zero And One In An Array */

#include<iostream>
#include<utility>
using namespace std;

// Print Array
void Print_Array(int size, int arr[]){
    for(int i = 0; i < size; i++){
        cout<< arr[i] << '\t';
    }
}
// Method 1: Sort 0's And 1's Using Counting Approach

void Sort_ZeroOne(int size, int arr[]){
    int zero_count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            zero_count++;
        }
    }
    for(int i = 0; i < size; i++){
        if(i < zero_count){
            arr[i] = 0;
        }
        else{
            arr[i] = 1;
        }
    }
    return;
}

// Method 2: Sort 0's And 1's Using 3 Pointer Approach

void Sort_ZeroOne_3(int size, int arr[]){
    for(int left = 0, right = (size - 1); left < right; ){
        if(arr[left] == 1 && arr[right] == 0){
            swap(arr[left] , arr[right]);
            left++;
            right--;
        }
        else if(arr[left] == 0 && arr[right] == 0){
            left++;
        }
        else if(arr[left] == 1 && arr[right] == 1){
            right--;
        }
        else{
            left++;
            right--;
        }
    }
    return;
}

// Method 3: Sort 0's And 1's Using 2 Pointer Approach

void Sort_ZeroOne_2(int size, int arr[]){
    for(int i = 0, j = 0; i < size; ){
        if(arr[i] == 0){
            swap(arr[i] , arr[j]);
            j++;
            i++;
        }
        else if(arr[i] == 1){
            i++;
        }
    }
    return;
}

int main(){
    int size = 6, arr[6];
    cout<< "Enter The values: " <<endl;
    for(int i = 0; i < size; i++){
        cin>> arr[i];
    }
    cout<< "The Array Is: " <<endl;
    Print_Array(size, arr);
    // Sort_ZeroOne(size, arr);
    Sort_ZeroOne_2(size, arr);
    cout<<endl << "After Sorting Of 0's And 1's The Array Is: " <<endl;
    Print_Array(size, arr);
}