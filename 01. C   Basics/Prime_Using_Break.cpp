// C++ Program To Check Whether A Number Is Prime Or Not Using Break Statement

#include<iostream>
using namespace std;
int main(){
    int num;
    bool is_prime = 1;
    cout<< "Enter The Number: ";
    cin>> num;
    for(int div = 2; div < num; div++){
        if(num % div == 0){
            is_prime = 0;
            break;
        }
    }
    if(is_prime == 1){
        cout<< num << " Is A Prime Number";
    }
    else{
        cout<< num << " Is Not A Prime Number";
    }
}