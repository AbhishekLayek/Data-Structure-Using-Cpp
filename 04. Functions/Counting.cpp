/* C++ Function To Print 1 To N */

#include<iostream>
using namespace std;
void Print_Count(int n){
    for(int i = 1; i <= n; i++){
        cout<< i << " ";
    }
    return;
}
int main(){
    int n;
    cout<< "Enter The Number: ";
    cin>> n;
    cout<< "Counting From 1 To " << n << " Is: " <<endl;
    Print_Count(n);
}