/* Check Whether A Given String  Is Palindrome Or Not */

#include<iostream>
#include<string.h>
using namespace std;

// Function To Check A String Is Palindrome Or Not

bool Check_Palindrome(char ch[], int len){
    for(int i = 0, j = len - 1; i <= j; i++, j--){
        if(ch[i] != ch[j]){
            return false;
        }
    }
    return true;
}

int main(){
    char ch[100];
    cout<< "Enter The String: ";
    cin>> ch;
    int len = strlen(ch);
    int is_palindrome = Check_Palindrome(ch, len);
    if(is_palindrome){
        cout<< "The Given String Is Palindrome";
    }
    else{
        cout<< "The Given String Is Not palindrome";
    }
}