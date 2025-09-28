/* Remove All Occurence Of A Substring In A Given String */

#include<iostream>
#include<string.h>
using namespace std;

// Function To Remove All Occurrence Substring In The Given String

void Remove_Occurrence_Substring(string &str, string &part){

    // Run A Loop Till We Found The substring In The Main String
    while(str.find(part) != string::npos){
        str.erase(str.find(part), part.length());
    }
    return;
}

int main(){
    string str, part;
    cout<< "Enter The String: ";
    cin>> str;
    cout<< "Enter The Substring: ";
    cin>> part;
    Remove_Occurrence_Substring(str, part);
    cout<< "After Removal Of All Ocuurence Of The Substring The String Become: " << str;
}