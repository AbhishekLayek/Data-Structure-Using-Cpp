/* Binary Search In A Nearly Sorted Array */
// The Element Present In i th index Of A Sorted Array Can Be Present In (i-1) th or i th or (i+1) th index Of A Nearly Sorted Array

#include<iostream>
using namespace std;

int Binary_Search_NearlySorted(int arr[], int size, int target){
    int start = 0, end = (size - 1);
    while(start <= end){
        int mid = start + ((end - start)/2);
        if((mid - 1) >= 0 && arr[mid - 1] == target){
            return (mid-1);
        }
        else if(arr[mid] == target){
            return mid;
        }
        else if((mid + 1) < size && arr[mid + 1] == target){
            return (mid+1);
        }
        else if(target > arr[mid]){
            start = mid + 2;
        }
        else{
            end = mid - 2;
        }
    }
    return -1;
}

int main(){
    int size, target;
    cout<< "Enter The Size Of Array: ";
    cin>> size;
    int *arr = new int[size];
    cout<< "Enter The Elements: "<<endl;
    for(int i = 0; i < size; i++){
        cin>> arr[i];
    }
    cout<< "The Array Is: "<<endl;
    for(int i = 0; i < size; i++){
        cout<< arr[i] << '\t';
    }
    cout<<endl<< "Enter The Target Element: ";
    cin>> target;
    int index = Binary_Search_NearlySorted(arr, size, target);
    if(index == -1){
        cout<< target << " Is Not Found";
    }
    else{
        cout<< target << " Is Found At Index " << index;
    }
}
