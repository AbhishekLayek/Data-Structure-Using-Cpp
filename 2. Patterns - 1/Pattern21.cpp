/* For n = 4
   1 1 1 1
     2 2 2
       3 3
         4 */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter The Number: ";
    cin>> n;
    for(int row = 1; row <= n; row++){
        for(int col_space = 1; col_space <= (row - 1); col_space++){
            cout<< "  ";
        }
        for(int col_no = 1; col_no <= (n - row + 1); col_no++){
            cout<< row << " ";
        }
        cout<<endl;
    }
}