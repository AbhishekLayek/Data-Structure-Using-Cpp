// c++ Program To Calculate Sum of 1 To n Numbers

#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout<< "Enter The Number: ";
    cin>> n;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }
    cout<< "Sum Of 1 to " << n << " Is: " << sum;
}