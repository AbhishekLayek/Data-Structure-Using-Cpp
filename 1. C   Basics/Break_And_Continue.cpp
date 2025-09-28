// Break: break Statement Helps To Get Out From The Loop, And Executes The Next Line Outside After The Loop.
// Continue: Used To Skip An Iteration Of The Current Loop. It Skips The Remaining Block Of Code For That Iteration.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter The Number: ";
    cin>> n;
    cout<< "Loop Using Break Statement: ";
    for(int i = 1; i <= n; i++){
        if(i == 5){
            break;
        }
        cout<< i << '\t';
    }
    cout<< "\nLoop Using Continue Statement: ";
    for(int j = 1; j <= n; j++){
        if(j == 5){
            continue;
        }
        cout<< j << '\t';
    }
}