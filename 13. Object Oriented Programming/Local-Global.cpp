/* Local And Global Variable */

#include<iostream>
using namespace std;

// Global Variable: Accessiable To All Over The Program
int x = 10;  

int main(){

    // Local Variable: Accessiable Only In The Block Where It Is Declared
    int x = 5;
    cout<< x <<endl;
    cout<< ::x <<endl;  // Access Global Variable Using ::
    {
        int x = 50;
        cout<< x <<endl; // Most Local Variable Will Be Accessed
    }  
}