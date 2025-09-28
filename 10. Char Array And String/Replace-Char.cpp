/* Replace @ With Space In A Given String */

#include<iostream>
using namespace std;

// Function To Replace @ With Space

void Replace(char ch[]){
    for(int index = 0; ch[index] != '\0'; index++){
        if(ch[index] == '@'){
            ch[index] = ' ';
        }
    }
    return;
}

int main(){
    char ch[100];
    cout<< "Enter The String: ";
    cin>> ch;
    cout<< "Before Replacing The String Is: \n" << ch <<endl;
    Replace(ch);
    cout<< "After Replacing The String Is: \n" << ch;
}