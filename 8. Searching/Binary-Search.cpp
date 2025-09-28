/* Find Wheather A Given Elememnt Is Present Or Not In A Given Array Using Binary Search  */
// Time-Complexity: O(log n) [Where n Is Size Of Array]

#include<iostream>
using namespace std;
int Binary_Search(int size, int arr[], int target){
    int start = 0, end = (size - 1);
    while(start <= end){
        int mid = start + ((end - start) / 2);   // Equivalent To (start + end) / 2
        if(arr[mid] == target){
            return mid;
        }
        else if(target > arr[mid]){
            start = (mid + 1);
        }
        else if(target < arr[mid]){
            end = (mid - 1);
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
    int ans_index = Binary_Search(size, arr, target);
    if(ans_index == -1){
        cout<< target << " Is Not Found";
    }
    else{
        cout<< target << " Is Found At Index " << ans_index;
    }
}