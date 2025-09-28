/* C++ Function To Calculate Sum Of All Even Numbers From 1 To N */

#include<iostream>
using namespace std;
int Sum_Even(int num){
    int sum = 0;
    for(int n = 2; n <= num; n = n + 2){
        sum = sum + n;
    }
    return sum;
}
int main(){
    int num;
    cout<< "Enter The Number: ";
    cin>> num;
    int ans = Sum_Even(num);
    cout<< "Sum Of 1 To " << num << " Even Numbers: " << ans;
}