/* C++ Function To Perform Linear Search In An Array */

#include<iostream>
using namespace std;
void Linear_Search(int size, int arr[], int target){
    bool is_found = 0;
    int i;
    for(i = 0; i < size; i++){
        if(arr[i] == target){
            is_found = 1;
            cout<< target << " Is Found At Index " << i <<endl;
        }
    }
    if(is_found == 0){
        cout<< target << " Is Not Found";
    }
    return;
}
int main(){
    int size = 10, arr[10], target;
    cout<< "Enter The values: " <<endl;
    for(int i = 0; i < size; i++){
        cin>> arr[i];
    }
    cout<< "The Array Is: " <<endl;
    for(int i = 0; i < size; i++){
        cout<< arr[i] << '\t';
    }
    cout<< "\nEnter The Element To Search: ";
    cin>> target;
    Linear_Search(size, arr, target);
}