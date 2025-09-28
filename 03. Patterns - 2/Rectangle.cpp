/* Rectangle Pattern:
   * * * * *
   * * * * *
   * * * * *
*/

#include<iostream>
using namespace std;
int main(){
    int row, col;
    cout<< "Enter The Number Of Rows: ";
    cin>> row;
    cout<< "Enter The Number Of columns: ";
    cin>> col;
    for(int r = 0; r < row; r++){
        for(int c = 0; c < col; c++){
            cout<< "* ";
        }
        cout<<endl;
    }
}