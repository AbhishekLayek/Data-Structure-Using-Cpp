/* Problem Statement:- Create An Array Of 10 Size, Take Input And Double Up Each Value Of The Array */

#include<iostream>
using namespace std;
int main(){
    int size = 10, arr[10];
    cout<< "Enter The Values: " <<endl;
    for(int i = 0; i < size; i++){
        cin>> arr[i];
    }
    cout<< "The Array Is: ";
    for(int i = 0; i < size; i++){
        cout<< arr[i] << '\t';
    }
    // Double Up Each Value
    for(int i = 0; i < size; i++){
        arr[i] = 2 * arr[i];
    }
    cout<< "\nAfter Double Up The Array Is: ";
    for(int i = 0; i < size; i++){
        cout<< arr[i] << '\t';
    }
} 