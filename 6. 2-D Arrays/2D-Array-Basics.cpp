/* Two Dimensional Array[2-D Array] : Collection Of Elements Organized In Rows And Columns */

#include<iostream>
using namespace std;
int main(){

    // Declaration Of 2-D Arrays (Syntax: data_type array_name [No. Of Rows] [No. Of Columns]; )
    int arr[2][3];
    int row = 2, col =3;
    // Initialization Of 2-D Arrays
    int a[2][3] = { {1, 2, 3} , {4, 5, 6} };
    int b[][3] = { {1, 2, 3} , {4, 5, 6} , {7, 8, 9} }; // We Have To Mention Atleast The Number Of Columns

    // Access Elements Of 2-D Arrays ( Syntax: array_name[index]; )
    cout<< "Element Of Array b[][3] At Row Index 0 & Column Index 1 Is: " << b[0][1] <<endl;

    // Taking Input In An 2-D Array
    cout<< "Taking Input In arr[2][3]:" <<endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<< "Enter The Element At Row Index " << i << " & Column Index " << j << " : ";
            cin>> arr[i][j];
        }
    }

    // Printing An 2-D Array
    cout<< "Printing The Array arr[2][3] :" <<endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<< arr[i][j] << '\t';
        }
        cout<<endl;
    }
}