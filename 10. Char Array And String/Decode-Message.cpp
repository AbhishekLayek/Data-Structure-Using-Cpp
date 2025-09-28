/* Decode The Message */

/* Problem Statement: 
   You are given the strings key and message, which represent a cipher key and a secret message, respectively. 

   The steps to decode message are as follows:
   1. Use the first appearance of all 26 lowercase English letters in key as the order of the substitution table.
   2. Align the substitution table with the regular English alphabet.
   3. Each letter in message is then substituted using the table.
   4. Spaces ' ' are transformed to themselves.
*/

#include<iostream>
#include<string.h>
using namespace std;

// Function To Decode The Message 

string Decode_Message(string key, string message){
    char start = 'a';
    char mapping[300] = {0};

    // We Have To Access Each Character Of key
    for(auto ch: key){

        // Create The Mapping
        if(ch != ' ' && mapping[ch] == 0){
            mapping[ch] = start;
            start++;
        }
    }

    // Decode The Message Using The Mapping
    string ans;
    for(auto ch: message){

        // Decode The Message
        if(ch == ' '){
            ans.push_back(' ');
        }
        else{
            char decoded_char = mapping[ch];
            ans.push_back(decoded_char);
        }
    }

    return ans;
}

int main(){
    string key, message;
    cout<< "Enter The Key: ";
    getline(cin, key);
    cout<< "Enter The Secret Message: ";
    getline(cin, message);
    string ans = Decode_Message(key, message);
    cout<< "The Decoded Message Is: " << ans;
}

/* 
   Output 1:

   Enter The Key: the quick brown fox jumps over the lazy dog
   Enter The Secret Message: vkbs bs t suepuv
   The Decoded Message Is: this is a secret

   Output 2: 
   
   Enter The Key: the quick brown fox jumps over the lazy dog
   Enter The Secret Message: b tn thkbskuo
   The Decoded Message Is: i am abhishek
*/