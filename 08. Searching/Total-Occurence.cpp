/* Find The Total Occurence Of A Number In a Sorted array */

#include<iostream>
using namespace std;

// First Occurence Of A Number
int First_Occurence(int size, int arr[], int target){
    int index, start = 0, end = (size - 1);
    while(start <= end){
        int mid = start + ((end - start) / 2);
        if(arr[mid] == target){
            index = mid;
            end = (mid - 1);
        }
        else if(target > arr[mid]){
            start = (mid + 1);
        }
        else if(target < arr[mid]){
            end = (mid - 1);
        }
    }
    return index;
}

// Last Occurence Of A Number
int Last_Occurence(int size, int arr[], int target){
    int index, start = 0, end = (size - 1);
    while(start <= end){
        int mid = start + ((end - start) / 2);
        if(arr[mid] == target){
            index = mid;
            start = (mid + 1);
        }
        else if(target > arr[mid]){
            start = (mid + 1);
        }
        else if(target < arr[mid]){
            end = (mid - 1);
        }
    }
    return index;
}

// Total Occurence = Last Occurence - First Occurence + 1
int Total_Occurence(int size, int arr[], int target){
    int total = Last_Occurence(size, arr, target) - First_Occurence(size, arr, target) + 1;
    return total;
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
    int total = Total_Occurence(size, arr, target);
    cout<< "Total Ocuurence Of " << target << " Is = " << total;
}