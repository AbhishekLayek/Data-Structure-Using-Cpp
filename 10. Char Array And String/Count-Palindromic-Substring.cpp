/* Count Total Number Of Palindromic Substring From A Given String */


#include<iostream>
#include<string.h>
using namespace std;

// Function To Count Palindome

int Count_Palindrome(string str, int i, int j){
    int count = 0;
    while(i >= 0 && j < str.length() && str[i] == str[j]){
        count++;
        i--;
        j++;
    }
    return count;
}

// Function To Count Total Number Palindromic Substring From The Given String

int Count_Palindromic_Substring(string str){
    int total_count = 0;
    for(int index = 0; index < str.length(); index++){

        // Case 1: For Odd Length Palindomic Substring
        int odd_count = Count_Palindrome(str, index, index);

        // Case 2: For Even Length Palindromic Substring
        int even_count = Count_Palindrome(str, index, index + 1);

        total_count = total_count + odd_count + even_count;
    }
    return total_count;
}

int main(){
    string str;
    cout<< "Enter The String: ";
    cin>> str;
    int count = Count_Palindromic_Substring(str);
    cout<< "Total Count Of Palindromic Substring = " << count;
}