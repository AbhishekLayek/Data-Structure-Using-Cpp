/* Find Missing Element In A Sorted Array */

#include<iostream>
using namespace std;
int Find_Missing(int size, int arr[]){
    int index, start = 0, end = (size - 1);
    while(start <= end){
        int mid = start + ((end - start) / 2), difference = arr[mid] - mid;
        if(difference == 1){
            start = (mid + 1); // Go To The Right Portion Of The Array
        }
        else{
            index = mid;
            end = (mid - 1);  // Go To The Left Portion Of The Array
        }
    }
    return (index + 1);
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
    int missing = Find_Missing(size, arr);
    cout<<endl<< "Missing Element = " << missing;
}