/* C++ Function To Display Maximum Of Three Numbers */

#include<iostream>
using namespace std;
int Find_Max(int n1, int n2, int n3){
    int max;
    if((n1 > n2) && (n1 > n3)){
        max = n1;
    }
    else if(n2 > n3){
        max = n2;
    }
    else{
        max = n3;
    }
    return max;
}
int main(){
    int n1, n2, n3;
    cout<< "Enter The First Number: ";
    cin>> n1;
    cout<< "Enter The Second Number: ";
    cin>> n2;
    cout<< "Enter The Third Number: ";
    cin>> n3;
    int ans = Find_Max(n1, n2, n3);
    cout<< "Maximum = " << ans;
}