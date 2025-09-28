/* Reverse A String */

#include<iostream>
#include<utility>
#include<string.h>
using namespace std;

void Reverse(char ch[], int len){
    for(int i = 0, j = len - 1; i < j; i++, j--){
        swap(ch[i], ch[j]);
    }
    return;
}

int main(){
    char ch[100];
    cout<< "Enter The String: ";
    cin.getline(ch, 100);
    cout<< "The String Before Reverse: \n" << ch <<endl;
    int len = strlen(ch);
    Reverse(ch, len);
    cout<< "The String After Reverse: \n" << ch <<endl;
}