/* C++ Function To Find Unique Element In An Array */

#include<iostream>
using namespace std;
void Find_Unique(int size, int arr[]){
    int unique = 0;
    for(int i = 0; i < size; i++){
        unique = (unique ^ arr[i]);
    }
    cout<<endl << "Unique Element = " << unique;
    return;
}
int main(){
    int size = 9, arr[9];
    cout<< "Enter The values: " <<endl;
    for(int i = 0; i < size; i++){
        cin>> arr[i];
    }
    cout<< "The Array Is: " <<endl;
    for(int i = 0; i < size; i++){
        cout<< arr[i] << '\t';
    }
    Find_Unique(size, arr);
}