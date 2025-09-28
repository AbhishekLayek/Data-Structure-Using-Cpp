// C++ Program To Print Odd Numbers From 1 to n (Inclusive)

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter The Number: ";
    cin>> n;
    cout<< "Odd Numbers From 1 to " << n << " Is: " <<endl;

    // 1st way

/*  for(int i = 0; i <= n; i++){
        if(i % 2 != 0){
            cout<< i << '\t';
        }
    }
*/

    // 2nd Way

    for(int i = 1; i <= n; i += 2){
        cout<< i << '\t';
    }
}