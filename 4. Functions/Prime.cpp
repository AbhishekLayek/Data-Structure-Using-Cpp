/* C++ Function To Check Whether A Number Is Prime Or Not */

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
        cout<< num << " Is Prime";
    }
    else{
        cout<< num << " Is Not Prime";
    }
    return;
}
int main(){
    int num;
    cout<< "Enter The Number: ";
    cin>> num;
    Check_Prime(num);
}