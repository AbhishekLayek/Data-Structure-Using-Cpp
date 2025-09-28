// C++ Program To Find Maximum Of Two Number

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<< "Enter The Value Of a = ";
    cin>> a;
    cout<< "Enter The Value of b = ";
    cin>> b;

    // if Statement

/*  if(a > b){
        cout<< "Maximum = " << a;
    }
    if(b > a){
        cout<< "Maximum = " << b;
    }   
*/
    // if-else Statement

    if(a > b){
        cout<< "Maximum = " << a <<endl;
    }
    else{
        cout<< "Maximum = " << b <<endl;
    }

// C++ Program To Check A Given Number Is Positive, Negative Or Zero

    int n;
    cout<< "Enter The Value Of n = ";
    cin>> n;

    // If-else if-else Statement
    if(n > 0){
        cout<< "The Number Is Positive";
    }
    else if(n < 0){
        cout<< "The Number Is Negative";
    }
    else{
        cout<< "The Number Is Zero";
    }
}