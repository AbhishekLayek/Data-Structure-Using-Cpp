/* Inverted Hollow Half Pyramid:
   * * * * * 
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
    cin>> n;
    for(int row = 0; row < n; row++){
        for(int col = 0; col < (n - row); col++){
            if(row == 0 || col == 0 || col == (n - row - 1)){
                cout<< "* ";
            }
            else{
                cout<< "  ";
            }
        }
        cout<<endl;
    }
}