/* Convert The Given String To Upercase */

#include<iostream>
using namespace std;

// Function To Covert Uppercase

void Convert_Uppercase(char ch[]){
    for(int index = 0; ch[index] != '\0'; index++){
        if(ch[index] >= 'a' && ch[index] <= 'z'){
            ch[index] = ch[index] - 'a' + 'A';
        }
    }
    return;
}

int main(){
    char ch[100];
    cout<< "Enter The String: ";
    cin.getline(ch, 100);
    cout<< "The String Is: \n" << ch <<endl;
    Convert_Uppercase(ch);
    cout<< "After Converting To Uppercase The String Is: \n" << ch;
}