// C++ Program To Multiply N Numbers From User

#include<iostream>
using namespace std;
int main(){
    int n, num, ans = 1;
    cout<< "How Many Time We Want To Multiply: ";
    cin>> n;
    cout<< "Enter The Numbers: " <<endl;
    for(int i = 1; i <= n; i++){
        cin>> num;
        ans = ans * num;
    }
    cout<< "Answer = " << ans;
}