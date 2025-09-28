/* Find Row With Maximum One In A 2-D Array */

#include<iostream>
#include<vector>
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

int Find_Row_With_MaxOne(vector<vector<int>>v){
    int row_no, max_one = -1;
    for(int i = 0; i < v.size(); i++){
        int one_count = 0;
        for(int j = 0; j < v[i].size(); j++){
            if(v[i][j] == 1){
                one_count++;
            }
        }
        if(one_count > max_one){
            max_one = one_count;
            row_no = i;
        } 
    }
    return row_no;
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
    cout<< "The Array Is: "<<endl;
    Print_Vector(v);
    cout<<endl<< "Maximum One Are Present In Row " << Find_Row_With_MaxOne(v);
}