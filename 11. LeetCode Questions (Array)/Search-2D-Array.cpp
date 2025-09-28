/* Binary Search In A 2-D Array */

#include<iostream>
#include<vector>
using namespace std;

// Print Vector
void Print_Vector(vector<vector<int>>v){
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout<< v[i][j] << '\t';
        }
        cout<<endl;
    }
    return;
}

// Binary Search In 2-D Array
bool Binary_Search_2D_Array(vector<vector<int>>v, int target){
    int row = v.size(), col = v[0].size(), n = row * col;
    for(int start = 0, end = (n - 1); start <= end; ){
        int mid = start + ((end - start)/2);
        int row_index = mid / col, col_index = mid % col;
        int current_num = v[row_index][col_index];

        if(current_num == target){
            return true;
        }
        else if(target > current_num){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return false;
}

int main(){
    int row, col, target;
    vector<vector<int>>v;
    cout<< "Enter The Number Of Row: ";
    cin>> row;
    cout<< "Enter The Number Of Column: ";
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
    cout<<endl<< "The 2-D Array Is: "<<endl;
    Print_Vector(v);
    cout<< "Enter The Target Element: ";
    cin>> target;
    bool is_found = Binary_Search_2D_Array(v, target);
    if(is_found){
        cout<< target << " Is Found";
    }
    else{
        cout<< target << " Is Not Found";
    }
}