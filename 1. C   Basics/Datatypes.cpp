// DATATYPE: Specifies Which Type Of Data We Will Use And Specifies The Memory Size For That Specific Data Type.

#include<iostream>
using namespace std;
int main(){

    // Boolean Datatype: bool
    bool b = true;
    cout<< b <<endl;

    // Character Datatype: char
    char c = 'A';
    cout<< c <<endl;

    // Integer Datatype: int
    int i = 5;
    cout<< i <<endl;

    // Floating Point Datatype: float
    float f = 2.5;
    cout<< f <<endl;

    // Double Floating Point Datatype: double
    double d = 4.56432;
    cout<< d <<endl;

    // To Know The Size Of The Datatype We Use: sizeof(variable_name)

    cout<< "Size Of bool: " << sizeof(b) << " byte" <<endl;
    cout<< "Size Of char: " << sizeof(c) << " byte" <<endl;
    cout<< "Size Of int: " << sizeof(i) << " byte" <<endl;
    cout<< "Size Of float: " << sizeof(f) << " byte" <<endl;
    cout<< "Size Of double: " << sizeof(d) << " byte" <<endl;
}