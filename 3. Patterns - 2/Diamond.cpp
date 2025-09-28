/* Diamond Pattern:
       *
      * *
     * * *
    * * * *
   * * * * *      
   * * * * *
    * * * *
     * * *
      * *
       * 
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter The Input Value: ";
    cin>> n;
    // Upper Portion Of Diamond (Full Pyramid)
    for(int row = 0; row < n; row++){
        // Printing The Spaces
        for(int col = 0; col < (n - row - 1); col++){
            cout<< " ";
        }
        // Printing The Stars
        for(int col = 0; col < (row + 1); col++){
            cout<< "* ";
        }
        cout<<endl;
    }
    // Lower Portion Of Diamond (Inverted Full Pyramid)
    for(int row = 0; row < n; row++){
        // Printing The Spaces
        for(int col = 0; col < row; col++){
            cout<< " ";
        }
        // Printing The Stars
        for(int col = 0; col < (n - row); col++){
            cout<< "* ";
        }
        cout<<endl;
    }
}