/* For n = 3
   A B C
   B C D
   C D E */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter The Number: ";
    cin>> n;
    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= n; col++){
            cout<< (char)('A' + row + col - 2) << " ";
        }
        cout<<endl;
    }
}