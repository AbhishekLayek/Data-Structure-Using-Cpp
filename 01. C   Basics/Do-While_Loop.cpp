// C++ Program To Print 1 To n-1 Natural Numbers Using Do-While Loop

#include<iostream>
using namespace std;
int main(){
    int n, i = 1;
    cout<< "Enter The Value Of n = ";
    cin>> n;

    // do-While Loop
    do{
        cout<< i << '\t';
        i++;
    }while(i < n);
}