/* C++ Function To Perform Transpose Of A 2-D Matrix */

#include<iostream>
#include<utility>
using namespace std;

// Print The Array
void Print_Array(int row, int col, int arr[3][3]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<< arr[i][j] << '\t';
        }
        cout<<endl;
    }
    return;
}

// Transpose
void Transpose(int row, int col, int arr[3][3]){
    for(int i = 0; i < row; i++){
        for(int j = (i + 1); j < col; j++){
            swap(arr[i][j] , arr[j][i]);
        }
    }
    return;
}

int main(){
    int row = 3, col = 3, arr[3][3];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<< "Enter The value At Row Index " << i << " & Column Index " << j << " : ";
            cin>> arr[i][j];
        }
    }
    cout<< "The Matrix Is: " <<endl;
    Print_Array(row, col, arr);
    Transpose(row, col, arr);
    cout<< "Transpose Of The Matrix: " <<endl;
    Print_Array(row, col, arr);
}