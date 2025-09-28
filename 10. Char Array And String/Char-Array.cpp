/* Char Array Basics */

#include<iostream>
using namespace std;
int main(){

    /* Null Character: Char Arrays Are Terminated With Null Character('\0'), Whoose ASCII Value Is 0. 
       While Printing The Char Array When It Gets The Null Character, It Stops Printing. Otherwise It Does'nt Know Where To Stop */

    // Declaration
    
    char ch[15];
    char array[10];
    char name[5];

    // Initialization
    
    char arr[5] = {'a', 'b', 'c' , 'd'};
    char crr[15] = "Virat";

    /* Taking Input */ 

    // Method 1: Usual Way Take Input In Char Arrays
    
    cout<< "Enter The Input In ch: ";
    // cin>> ch; // It Stop Taking Input When It Gets Enter Or New Line ('\n) , Tab ('\t') , Spaces (' ')
    cin.getline(ch, 15); // Solution: cin.getline(array_name, maximum_input_size)

    // Method 2: Taking Input Using For Loop
    
    cout<< "Enter The Input In array: "<<endl;
    for(int i = 0; i < 5; i++){
        cin>> array[i];
    }
    array[5] = '\0'; // Null Character To Specify The Termination Of array

    // Method 3: Taking Input By Mentioning The Index
    
    name[0] = 'A';
    name[1] = 'b';
    name[2] = 'h';
    name[3] = 'i';
    name[4] = '\0'; // Null Character To Specify The Termination Of name

    // Printing

    // Method 1: Usual Way To Print Char Arrays
    
    cout<< "Value Of ch: " << ch <<endl;
    cout<< "Value Of array: " << array <<endl;
    cout<< "Value Of name: " << name <<endl;
    cout<< "Value Of arr: " << arr <<endl;
    cout<< "Value Of crr: " << crr <<endl;


    // Method 2: Print Using For Loop

    for(int i = 0; i < 15; i++){
        cout<< "Value In ch At Index " << i << " : " << ch[i] <<endl;
    }

    char null_ch = ch[15];
    cout<< "ASCII Value Of Null Character: " << (int)null_ch <<endl;
}