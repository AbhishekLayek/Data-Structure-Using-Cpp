// C++ Program To Print Even Numbers From 1 to n (Exclusive)

#include<iostream>
using namespace std;
int main(){
    int n, i = 2;
    cout<< "Enter The Number: ";
    cin>> n;
    cout<< "Even Numbers From 1 to " << n << " Is: " <<endl;

    // 1st Way

/*  while(i < n){
        if(i % 2 == 0){
            cout<< i << '\t';
        }
        i++;
    }
*/
    
    // 2nd way
    
    while(i < n){
        cout<< i << '\t';
        i = i + 2;
    }
}