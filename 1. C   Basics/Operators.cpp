// Operators In C++

#include<iostream>
using namespace std;
int main(){
    int a = 5, b = 2, c = 10, d = 0;
    float f = 5.0;

    // Arithmetic Operator
    cout<< a << " + " << b << " = " << (a + b) <<endl;       // Addition (+)
    cout<< a << " - " << b << " = " << (a - b) <<endl;      // Substraction (-)
    cout<< a << " * " << b << " = " << (a * b) <<endl;     // Multiplication (*)
    cout<< a << " / " << b << " = " << (a / b) <<endl;    // Division (\)
    cout<< f << " / " << b << " = " << (f / b) <<endl;
    cout<< a << " % " << b << " = " << (a % b) <<endl;  // Modulus (%)

    // Relational Operator
    cout << (a == b) <<endl;      // Equal To (==)
    cout<< (a > b) <<endl;       // Greater Than (>)
    cout<< (b < c) <<endl;      // Less Than (<)
    cout<< (b >= 5) <<endl;    // Greater Than Equal To (>=)
    cout<< (c <= 10) <<endl;  // Less Than Equal To (<=)
    cout<< (a != b) <<endl;  // Not Equal To (!=)

    // Logical Operator
    cout<< ((a >= 5) && (b < c) && (c <= 10)) <<endl;    // Logical AND (&&)
    cout<< ((a < b) || (b >= c) || (c == 10)) <<endl;   // Logical OR (||)
    cout<< (!a) <<endl;                              
    cout<< (!d) <<endl;   // Logical NOT (!)

    // Bitwise Operator
    cout<< a << " & " << b << " = " << (a & b) <<endl;         // Bitwise AND (&)
    cout<< a << " | " << b << " = " << (a | b) <<endl;        // Bitwise OR (|)
    cout<< "~ " << a << " = " << (~a) <<endl;                // Bitwise NOT (~)
    cout<< a << " ^ " << b << " = " << (a ^ b) <<endl;      // Bitwise XOR (^)
    cout<< a << " << " << b << " = " << (a << b) <<endl;   // Bitwise Left Shift (<<)
    cout<< a << " >> " << b << " = " << (a >> b) <<endl;  // Bitwise Right Shift (>>)
    cout<< c++ <<endl;
    cout<< ++c <<endl;
    cout<< c-- <<endl;
    cout<< --c <<endl;
}