/* Flipped Solid Diamond Pattern:
   **** ****
   ***   ***
   **     **
   *       *
   *       *
   **     **
   ***   ***
   **** **** 
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter The Number: ";
    cin>> n;
    // Upper Portion Of Flipped Solid Diamond
    for(int row = 0; row < n; row++){
        // Printing Left Side
        for(int col = 0; col < (n - row); col++){
            cout<< "*";
        }
        // Printing The Inside Spaces
        for(int col = 0; col < (2 * row + 1); col++){
            cout<< " ";
        }
        // Printing The Right Side
        for(int col = 0; col < (n - row); col++){
            cout<< "*";
        }
        cout<<endl;
    }
    // Lower Portion Of Flipped Solid Diamond
    for(int row = 0; row < n; row++){
        // Printing Left Side
        for(int col = 0; col < (row + 1); col++){
            cout<< "*";
        }
        // Printing The Inside Spaces
        for(int col = 0; col < ((2 * n) - (2 * row) - 1); col++){
            cout<< " ";
        }
        // Printing The Right Side
        for(int col = 0; col < (row + 1); col++){
            cout<< "*";
        }
        cout<<endl;
    }
}