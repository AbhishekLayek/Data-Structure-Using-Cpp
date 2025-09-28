/* C++ Function To Calculate Diagonal Sum Of Elememnts In a 2-D Array */

#include<iostream>
using namespace std;
// Printing The Array

void Print_Array(int row, int col, int arr[3][3]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<< arr[i][j] << '\t';
        }
        cout<<endl;
    }
    return;
}
// Function To Calculate Diagonal Sum

int Diagonal_Sum(int row, int arr[3][3]){
    int sum = 0;
    for(int i = 0; i < row; i++){
        sum = sum + arr[i][i];
    }
    return sum;
}

// Function To calculate Reverse-Diagonal Sum

int Reverse_Diagonal_Sum(int row, int arr[3][3]){
    int sum = 0;
    for(int i = 0, j = (row - 1); j >= 0; i++, j--){
        sum = sum + arr[i][j];
    }
    return sum;
}
int main(){
    int row = 3, col = 3, arr[3][3];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<< "Enter The value At Row Index " << i << " & Column Index " << j << " : ";
            cin>> arr[i][j];
        }
    }
    cout<< "The Array Is: " <<endl;
    Print_Array(row, col, arr);
    cout<< "Diagonal Sum: " << Diagonal_Sum(row, arr) <<endl; 
    cout<< "Reverse-Diagonal Sum: " << Reverse_Diagonal_Sum(row, arr) <<endl;
    
}