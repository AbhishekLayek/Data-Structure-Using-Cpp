/* C++ Function To Find Minimum No In An Array */

#include<iostream>
#include<limits.h>
using namespace std;
void Find_Min(int size, int arr[]){
    int min = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout<<endl << "Minimum No = " << min;
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
    Find_Min(size, arr);
}