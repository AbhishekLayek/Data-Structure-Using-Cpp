/* For n = 4
         1
       1 2 1
     1 2 3 2 1
   1 2 3 4 3 2 1 */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter The Number: ";
    cin>> n;
    for(int row = 1; row <= n; row++){
        for(int col_space = 1; col_space <= (n - row); col_space++){
            cout<< "  ";
        }
        for(int col_1 = 1; col_1 <= row; col_1++){
            cout<< col_1 << " ";
        }
        for(int col_2 = 1; col_2 <= (row - 1); col_2++){
            cout<< (row - col_2) << " ";
        }
        cout<<endl;
    }
}