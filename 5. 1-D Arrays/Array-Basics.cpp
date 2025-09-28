/* Array: Array Is A Data Structure Which Can Store Collection Of Similar Data Elements. */

#include<iostream>
using namespace std;
int main(){
    // Declaration Of An Array

    int arr[10];  // When The Array Is Only Declared But Not Initialized The Garbadge Value Stored In The Array
    int mark[5];
    char crr[5];
    
    // Initialization Of An Array

    int array[5] = {1, 2 , 3, 4, 5};  // Initializing An Array By Mentioning The Size
    int brr[] = {2, 4, 6, 8, 10, 12};  // Initializing An Array Without Mentioning The Size
    int c[5] = {1, 3};  // When Number Of Element Is Less Than Array Size Then Rest Of The Place Will Be Filled With 0

    //  Find Size And Address Of An Array
    cout<< "Size Of arr: " << sizeof(arr) << " Bytes" <<endl;
    cout<< "Size Of brr: " << sizeof(brr) << " Bytes" <<endl;
    cout<< "Address Of arr: " << addressof(arr) <<endl;
    cout<< "Address Of crr: " << (&crr) <<endl;

    // Access All Elements Of array[5] Using index

    for(int i = 0; i < 5; i++){
        cout<< "Element Of array[5] At index " << i << " : " << array[i] <<endl;
    }

    // Taking Input In An Array

    cout<< "Enter The Values In mark[5] : " <<endl;
    for(int i = 0; i < 5; i++){
        cin>> mark[i];
    }

    // Print An array
    cout<< "Print mark[5] : " <<endl;
    for(int i = 0; i < 5; i++){
        cout<< mark[i] << '\t';
    }
}