/* C++ Function To Perform Linear Search In 2-D Array */

#include<iostream>
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
void Linear_Search(int row, int col, int arr[3][3], int target){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == target){
                cout<< target << " Is Found At Row Index " << i << " & Column Index " << j;
                return;
            }
        }
    }
    cout<< target << " Is Not Found !";
    return;
}
int main(){
    int row = 3, col = 3, arr[3][3], target;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<< "Enter The value At Row Index " << i << " & Column Index " << j << " : ";
            cin>> arr[i][j];
        }
    }
    cout<< "The Array Is: " <<endl;
    Print_Array(row, col, arr);
    cout<< "Enter The Target: ";
    cin>> target;
    Linear_Search(row, col, arr, target);
}