// Typecasting: Conversion Of One Datatype To Another Datatype.

#include<iostream>
using namespace std;
int main(){
    // Typecasting: char --> int

    // In ASCII table 'a' is mapped with 97. Binary representation of 97 = 1100001
    int i = 'a';     // 97 will typecast into int and get stored. i = 00000000 00000000 00000000 1100001 (int takes 4 byte = 32 bits)
    cout<< i <<endl;

    // Typecasting: int --> char

    // In ASCII table 98 is mapped with 'b'. Binary representation of 98 = 00000000 00000000 00000000 1100010 (In int)
    char ch = 98;          // 98 will typecast into char and get stored. i = 1100010 (char takes only 1 byte = 8 bits)
    cout<< ch <<endl;

    // Typecast From Int To Char But The value Is Too Large To Store In Char   

    char c = 480;      // char takes only 1 byte = 8 bits. So last 1 byte will taken and first 24 bits will be discarded. 
    cout<< c <<endl;   // Acording to the last byte whatever charcter is mapped in ASCII table will be printed.
}