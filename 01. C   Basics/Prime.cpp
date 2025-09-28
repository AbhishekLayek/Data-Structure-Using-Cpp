// C++ Program To Check Whether A Number Is Prime Or Not

#include<iostream>
using namespace std;
int main(){
    int num, count = 0;
    cout<< "Enter The Number = ";
    cin>> num;
    for(int div = 2; div < num; div++){
        if(num % div == 0){
            count++;
        }
    }
    if(count == 0){
        cout<< num << " Is A prime Number";
    }
    else{
        cout<< num << " Is Not A Prime Number";
    }
}