/* C++ Function To Count 0's And 1's In An Array */

#include<iostream>
using namespace std;
void Count_ZerOne(int size, int arr[]){
    int zero_count = 0, one_count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            zero_count++;
        }
        if(arr[i] == 1){
            one_count++;
        }
    }
    cout<<endl << "Zero Count = " << zero_count <<endl;
    cout<< "One Count = " << one_count <<endl;
    return;
}
int main(){
    int size = 10, arr[10];
    cout<< "Enter The values: " <<endl;
    for(int i = 0; i < size; i++){
        cin>> arr[i];
    }
    cout<< "The Array Is: " <<endl;
    for(int i = 0; i < size; i++){
        cout<< arr[i] << '\t';
    }
    Count_ZerOne(size, arr);
}