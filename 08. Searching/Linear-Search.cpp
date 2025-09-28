/* Find Wheather A Given Elememnt Is Present Or Not In A Given Array Using Linear Search */
// Time-Complexity: O(n) [Where n = size of array]

#include<iostream>
using namespace std;
void Linear_Search(int size, int arr[], int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            cout<< target << " Is Found At Index " << i;
            return;
        }
    }
    cout<< target << " Is Not Found";
    return;
}
int main(){
    int size, target;
    cout<< "Enter The Size Of The Array: ";
    cin>> size;
    int *arr = new int[size];
    cout<< "Enter The Elements: " <<endl;
    for(int i = 0; i < size; i++){
        cin>> arr[i];
    }
    cout<< "The Array Is: " <<endl;
    for(int i = 0; i < size; i++){
        cout<< arr[i] << '\t';
    }
    cout<<endl<< "Enter The Target Element: ";
    cin>> target;
    Linear_Search(size, arr, target);
}