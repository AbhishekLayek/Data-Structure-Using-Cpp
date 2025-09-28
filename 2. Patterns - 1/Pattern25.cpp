/* For n = 5 
   1 2 3 4 5 5 4 3 2 1
   1 2 3 4 * * 4 3 2 1
   1 2 3 * * * * 3 2 1
   1 2 * * * * * * 2 1
   1 * * * * * * * * 1
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter The Number: ";
    cin>> n;
    for(int row = 1; row <= n; row++){
        for(int col_1 = 1; col_1 <= (n - row + 1); col_1++ ){
            cout<< col_1 << " ";
        }
        for(int col_star = 1; col_star <= (2 * row - 2); col_star++){
            cout<< "* ";
        }
        for(int col_2 = 1; col_2 <= (n - row + 1); col_2++){
            cout<< (n - row - col_2 + 2) << " ";
        }
        cout<<endl;
    }
}