/* C++ Function To Calculate Row-Wise & Column-Wise Sum Of Elements In A 2-D Array */

#include<iostream>
using namespace std;
// Printing The Array

void Print_Array(int row, int col, int arr[3][4]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<< arr[i][j] << '\t';
        }
        cout<<endl;
    }
    return;
}
// Function To Calculate Row-Wise Sum

void Rowwise_Sum(int row, int col, int arr[3][4]){
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum = sum + arr[i][j]; 
        }
        cout<< "Sum Of Elements At Row " << i << " = "  << sum <<endl;
    }
    return;
}

// Function To calculate Column-Wise Sum

void Columnwise_Sum(int row, int col, int arr[3][4]){
    for(int i = 0; i < col; i++){
        int sum = 0;
        for(int j = 0; j < row; j++){
            sum = sum + arr[j][i]; 
        }
        cout<< "Sum Of Elements At Column " << i << " = "  << sum <<endl;
    }
    return;
}
int main(){
    int row = 3, col = 4, arr[3][4];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<< "Enter The value At Row Index " << i << " & Column Index " << j << " : ";
            cin>> arr[i][j];
        }
    }
    cout<< "The Array Is: " <<endl;
    Print_Array(row, col, arr);
    cout<< "Row-Wise Sum: " <<endl;
    Rowwise_Sum(row, col, arr);
    cout<< "Column-Wise Sum: " <<endl;
    Columnwise_Sum(row, col, arr);
}