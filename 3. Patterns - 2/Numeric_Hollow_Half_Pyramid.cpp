/* Numeric Hollow Half Pyramid:
   1
   1 2
   1   3
   1     4
   1 2 3 4 5 
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter The Input Value: ";
    cin>> n;
    for(int row = 0; row < n; row++){
        for(int col = 0; col < (row + 1); col++){
            if(row == (n-1) || col == 0 || col == row){
                cout<< (col + 1) << " ";
            }
            else{
                cout<< "  ";
            }
        }
        cout<<endl;
    }
}