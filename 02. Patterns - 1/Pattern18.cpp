/* For n = 4
         *
       * *
     * * *
   * * * *
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter The Number: ";
    cin>> n;
    for(int row = 1; row <= n; row++){
        // Printing The Spaces
        for(int col_space = 1; col_space <= (n - row); col_space++){
            cout<< "  ";
        }
        // Printing The Stars
        for(int col_star = 1; col_star <= row; col_star++){
            cout<< "* ";
        }
        cout<<endl;
    }
}