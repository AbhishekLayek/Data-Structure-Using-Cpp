/* C++ Function To Calculate Sum Of 1 To N Natural Numbers */

#include<iostream>
using namespace std;
int Find_Sum (int num){
    int sum = 0;
    for(int n = 1; n <= num; n++){
        sum = sum + n;
    }
    return sum;
}
int main(){
    int num;
    cout<< "Enter The Number: ";
    cin>> num;
    int res = Find_Sum(num);
    cout<< "Sum Of 1 To " << num << " Is: " << res;
}