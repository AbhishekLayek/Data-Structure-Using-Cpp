/* For n = 4
   1
   2 3
   4 5 6
   7 8 9 10 */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter The Number: ";
    cin>> n;
    int count = 1;
    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= row; col++){
            cout<< count << " ";
            count++;
        }
        cout<<endl;
    }
}