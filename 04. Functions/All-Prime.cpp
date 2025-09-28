/* C++ Function To Display All Prime Numbers From 1 To N */

#include<iostream>
using namespace std;
void Check_Prime(int num){
    bool is_prime = 1;
    for(int div = 2; div < num; div++){
        if(num % div == 0){
            is_prime = 0;
            break;
        }
    }
    if(is_prime == 1){
        cout<< num << " ";
    }
    return;
}
int main(){
    int n;
    cout<< "Enter The Number: ";
    cin>> n;
    cout<< "All Prime Numbers From 1 To " << n << " Is: "<<endl;
    for(int num = 2; num <= n; num++){
        Check_Prime(num);
    }
}