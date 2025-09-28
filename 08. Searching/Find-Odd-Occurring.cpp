/* Find Odd Occurring Element */

#include<iostream>
using namespace std;

int Find_Odd_Occurring(int arr[], int size){
    int start = 0, end = (size - 1);
    while(start <= end){
        int mid = start + ((end - start)/2);

        // Case 1: Single Element
        if(start == end){
            return start;
        }

        // Case 2: mid Is Odd
        else if(mid & 1){
            if(arr[mid] == arr[mid - 1] && (mid - 1) >= 0){
                start = mid + 1;  // Go To Right
            }
            else{
                end = mid - 1;  // Go To Left
            }
        }

        // Case 3: mid Is Even
        else{
            if(arr[mid] == arr[mid + 1] && (mid + 1) < size){
                start = mid + 2;  // Go To Right
            }
            else{
                end = mid;      // Go To Left
            }
        }
    }
    return -1;
}

int main(){
    int size;
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
    int ans = Find_Odd_Occurring(arr, size);
    cout<<endl<< "Odd Occurring Element = " << arr[ans];
}