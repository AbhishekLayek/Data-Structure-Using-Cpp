/* C++ Function To Find Maximum Number In A 2-D Array */

#include<iostream>
#include<limits.h>
using namespace std;
void Print_Array(int row, int col, int arr[3][3]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<< arr[i][j] << '\t';
        }
        cout<<endl;
    }
    return;
}
int Find_Max(int row, int col, int arr[][3]){
    int max = INT_MIN;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    return max;
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
    int max = Find_Max(row, col, arr);
    cout<< "Maximum = " << max;
}