/* C++ Function To Print All Dual Pairs Of An array*/

#include<iostream>
using namespace std;
void Print_Dual_Pair(int size, int arr[]){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout<< arr[i] << "," << arr[j] <<endl;
        }
    }
    return;
}
int main(){
    int size = 5, arr[5], target;
    cout<< "Enter The values: " <<endl;
    for(int i = 0; i < size; i++){
        cin>> arr[i];
    }
    cout<< "The Array Is: " <<endl;
    for(int i = 0; i < size; i++){
        cout<< arr[i] << '\t';
    }
    cout<<endl << "All Dual Pairs Of Array: " <<endl;
    Print_Dual_Pair(size, arr);
}