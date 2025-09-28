/* Calculate The Length Of String */

#include<iostream>
#include<string.h>
using namespace std;

// Function To Calculate The Length Of String

int Find_Length(char ch[], int size){
    int index = 0;
    while(ch[index] != '\0'){
        index++;
    }
    return index;
}

int main(){
    char ch[100];
    cout<< "Enter The String: ";
    cin.getline(ch, 100);
    int len = Find_Length(ch, 100);
    // int len = strlen(ch); // Utility Function To Calculate Length Of String
    cout<< "Length Of String = " << len;
}