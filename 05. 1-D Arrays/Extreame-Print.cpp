/* C++ Function To Print Extreame Values In An Array */

#include<iostream>
using namespace std;
void Print_Extreame(int size, int arr[]){
    for(int left = 0, right = (size - 1); left <= right; left++ , right--){
        if(left == right){
            cout<< arr[left];
        }
        else{
            cout<<arr[left] << '\t' << arr[right] << '\t'; 
        }
    }
    return;
}
int main(){
    int size = 5, arr[5];
    cout<< "Enter The values: " <<endl;
    for(int i = 0; i < size; i++){
        cin>> arr[i];
    }
    cout<< "The Array Is: " <<endl;
    for(int i = 0; i < size; i++){
        cout<< arr[i] << '\t';
    }
    cout<<endl << "After Printing Extreame Values: " <<endl;
    Print_Extreame(size, arr);
}