/* Check Whether A Given String Is Palindrome Or Not After Deleting Atmost One (0 or 1) Character From It */

#include<iostream>
#include<string.h>
using namespace std;

bool Check_Remaining_Palindrome(string str, int l, int r){
    while(l <= r){
        if(str[l] == str[r]){
            l++;
            r--;
        }
        else{
            return false;
        }
    }
    return true;
}

bool Valid_Palindrome(string str){
    int l = 0, r = str.length() - 1;
    while(l <= r){
        if(str[l] == str[r]){
            l++;
            r--;
        }
        else{
            // Remove The Left Character & Check The Remaining Part Whether It Is Palindrome Or Not
            bool ans1 = Check_Remaining_Palindrome(str, l+1, r);

            // Remove The Right Character & Check The Remaining Part Whether It Is Palindrome Or Not
            bool ans2 = Check_Remaining_Palindrome(str, l, r-1);

            // If Any Of The ans1 and ans2 Is True Then Return True
            return ans1 || ans2;
        }
    }
    // We Reach Here Only When The Loop Doesn't Enter The else Part Means 0 Removal
    return true;
}

int main(){
    string str;
    cout<< "Enter The String: ";
    cin>> str;
    bool is_palindrome = Valid_Palindrome(str);
    if(is_palindrome){
        cout<< "Valid Palindrome";
    }
    else{
        cout<< "Invalid Palindrome";
    }
}