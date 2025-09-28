/* Hollow Rectangle/Square Pattern:
   * * * * * 
   *       *
   *       * 
   *       *
   * * * * * 
*/

#include<iostream>
using namespace std;
int main(){
    int row, col;
    cout<< "Enter The Number Of Rows: ";
    cin>> row;
    cout<< "Enter The Number Of Columns: ";
    cin>> col;
    for(int r = 0; r < row; r++){
        for(int c = 0; c < col; c++){
            if( r == 0 || r == row - 1 || c == 0 || c == col - 1){
                cout<< "* ";
            }
            else{
                cout<< "  ";
            }
        }
        cout<<endl;
    }
}