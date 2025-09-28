/* Remove All Adjacent Duplicates From A Given String */

#include<iostream>
#include<string.h>
using namespace std;

// Function To Remove All Adjacent Duplicates From The String

string Remove_Adjacent_Duplicates(string str){

    // declare a void string 
    string ans = "";

    // create a loop that will traverse the given string
    for(int index = 0; index < str.length(); index++){

        // compare the current element of given string with the righmost/last element of the created string
        // if they are same then pop the element in the created string otherwise push

        if(str[index] == ans[ans.length() - 1] && ans.length() >= 0){
            ans.pop_back();
        }
        else{
            ans.push_back(str[index]);
        }
    }
    return ans;
}

int main(){
    string str;
    cout<< "Enter The String: ";
    cin>> str;
    string ans = Remove_Adjacent_Duplicates(str);
    cout<< "After Removal Of All Adjacent Duplicates The String Is: " << ans;
}