// C++ Program To Find Maximum Of 3 Numbers

#include<iostream>
using namespace std;
int main(){
    int n1, n2, n3;
    cout<< "Enter The First number: ";
    cin>> n1;
    cout<< "Enter The Second number: ";
    cin>> n2;
    cout<< "Enter The Third number: ";
    cin>> n3;
    if((n1 > n2) && (n1 > n3)){
        cout<< "Maximum = " << n1;
    }
    else if((n2 > n3)){
        cout<< "Maximum = " << n2;
    }
    else{
        cout<< "Maximum = " << n3;
    }
}