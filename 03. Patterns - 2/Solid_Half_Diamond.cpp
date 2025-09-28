/*Solid Half Diamond Pattern:
  *
  * *
  * * *
  * * * *
  * * * *
  * * *
  * *
  * 
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter The Number: ";
    cin>> n;
    // Printing The Upper Portion Of Solid Half Diamond
    for(int row = 0; row < n; row++){
        for(int col = 0; col < (row + 1); col++){
            cout<< "* ";
        }
        cout<<endl;
    }
    for(int row = 0; row < n; row++){
        for(int col = 0; col < (n - row); col++){
            cout<< "* ";
        }
        cout<<endl;
    }
}