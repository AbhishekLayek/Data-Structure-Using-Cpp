/* For n = 4
   16 15 14 13
   12 11 10 9
   8  7  6  5 
   4  3  2  1 */

#include<iostream>
using namespace std;
int main(){
    int n, count;
    cout<< "Enter The Number: ";
    cin>> n;
    count = n * n;
    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= n; col++){
            cout<< count << '\t';
            count--;
        }
        cout<<endl;
    }
}

