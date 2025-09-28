/* Inverted Full Pyramid Pattern: 
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
    cout<< "Enter The Input value: ";
    cin>> n;
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