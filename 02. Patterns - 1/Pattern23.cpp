/* For n = 4
         1
       2 3
     4 5 6
   7 8 9 10  */

#include<iostream>
using namespace std;
int main(){
    int n, count = 1;
    cout<< "Enter The Number: ";
    cin>> n;
    for(int row = 1; row <= n; row++){
        for(int col_space = 1; col_space <= (n - row); col_space++){
            cout<< "  ";
        }
        for(int col_no = 1; col_no <= row; col_no++){
            cout<< count << " ";
            count++;
        }
        cout<<endl;
    }
}