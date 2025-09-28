/* Fancy Pattern 2:
   1
   2*3
   4*5*6
   7*8*9*10
   7*8*9*10
   4*5*6
   2*3
   1 
*/

#include<iostream>
using namespace std;
int main(){
    int n, count1 = 1;
    cout<< "Enter The Input Value: ";
    cin>> n;
    // Printing The Upper Portion Of The Pattern
    for(int row = 0; row < n; row++){
        for(int col = 0; col < (2 * row + 1); col++){
            if(col % 2 == 0){
                cout<< count1;
                count1++;
            }
            else{
                cout<< "*";
            }
        }
        cout<<endl;
    }
    // Printing The Lower Portion Of The Pattern
    int start = (count1 - n);
    for(int row = 0; row < n; row++){
        int count2 = start;
        for(int col = 0; col < ((2*n) - (2*row) - 1); col++){
            if(col % 2 == 0){
                cout<< count2;
                count2++;
            }
            else{
                cout<< "*";
            }
        }
        start = start - (n - row - 1);
        cout<<endl;
    }
}