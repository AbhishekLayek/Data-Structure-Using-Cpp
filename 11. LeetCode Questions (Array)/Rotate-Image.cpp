/* Rotate A 2-D Array By 90 Degree(clockwise) */

#include<iostream>
#include<utility>
#include<bits/stdc++.h>
using namespace std;

void Print_Vector(vector<vector<int>>v){
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout<< v[i][j] << '\t';
        }
        cout<<endl;
    }
    return;
}

void Rotate_Image(vector<vector<int>>&v){

    // Step 1: Transpose Of The 2-D Array
    for(int i = 0; i < v.size(); i++){
        for(int j = (i + 1); j < v[i].size(); j++){
            swap(v[i][j] , v[j][i]);
        }
    }

    // Step 2: Reverse The Rows
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            reverse(v[i].begin() , v[i].end());
        }
    }
    return;
}

int main(){
    int row, col;
    vector<vector<int>>v;
    cout<< "Enter The Number Of Rows: ";
    cin>> row;
    cout<< "Enter The Number Of Columns: ";
    cin>> col;
    cout<< "Enter Elements: "<<endl;
    for(int i = 0; i < row; i++){
        v.push_back(vector<int>());
        for(int j = 0; j < col; j++){
            int d;
            cin>> d;
            v[i].push_back(d);
        }
    }
    cout<< "The 2-D Array Is: "<<endl;
    Print_Vector(v);
    Rotate_Image(v);
    cout<< "After Rotate 90 Degree, The Array: "<<endl;
    Print_Vector(v);
}