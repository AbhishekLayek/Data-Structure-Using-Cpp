/* Hollow Diamond Pattern:
       *
      * *
     *   *
    *     *
   *       *
   *       *
    *     *
     *   *
      * *
       * 
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter The Input Value: ";
    cin >> n;
    // Upper Portion Of Hollow Diamond (Hollow Pyramid)
    for(int row = 0; row < n; row++){
        // Printing The Outside Spaces
        for(int col = 0; col < (n - row - 1); col++){
            cout<< " ";
        }
        // Printing The Stars And Inside Spaces
        for(int col = 0; col < (2 * row + 1); col++){
            if(col == 0 || col == (2 * row)){
                cout<< "*";
            }
            else{
                cout<< " ";
            }
        }
        cout<<endl;
    }
    // Lower Portion Of Hollow Diamond (Inverted Hollow Pyramid)
    for(int row = 0; row < n; row++){
        // Printing The Outside Spaces
        for(int col = 0; col < row; col++){
            cout<< " ";
        }
        // Printing The Stars And Inside Spaces
        for(int col = 0; col < ((2*n) - (2*row) - 1); col++){
            if(col == 0 || col == ((2*n) - (2*row) - 2)){
                cout<< "*";
            }
            else{
                cout<< " ";
            }
        }
        cout<<endl;
    }

}