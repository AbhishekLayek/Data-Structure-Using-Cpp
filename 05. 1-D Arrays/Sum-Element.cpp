/* Problem Statement:- Create A Array Of Size 5, Take Input. Calculate Total Sum Of Each Element */

#include<iostream>
using namespace std;
int Array_Sum(int size, int arr[]){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    return sum;
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
    int sum = Array_Sum(size, arr);
    cout<< "\nSum Of Each Element = " << sum;
}