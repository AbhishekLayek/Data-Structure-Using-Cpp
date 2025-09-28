/* String Basics */

#include<iostream>
#include<string.h>
using namespace std;
int main(){

    // Declaration
    
    string str;

    // Initialization
    
    string str1 = "Abhishek";
    string str2 = "Layek"; 
    string str3 = "";  // Empty String

    // Taking Input
    
    cout<< "Enter The Value Of str: ";
    // cin>> str; // Without Space
    getline(cin, str); // With Space

    // Printing
    
    cout<< "Print The Value Of str: \n"<< str <<endl;

    
    /* Utility Functions */

    // Return Length Of String: str_name.length() 

    cout<< "Length Of str = " << str.length() <<endl;

    // Test If String Is Empty(Return 1 For True And 0 For False) : str_name.empty()

    cout<< "Is str Is Empty: " << str.empty() <<endl;
    cout<< "Is str3 Is Empty: " << str3.empty() <<endl;

    // Get Character In String At A Particular Index: str_name.at(index)

    cout<< "Character Present In str1 At Index 0: " << str1.at(0) <<endl;

    // Access First Character: str_name.front()

    cout<< "First Character Of str1 Is: " << str1.front() <<endl;

    // Access Last Character: str_name.back()

    cout<< "Last Character Of str1 Is: " << str1.back() <<endl;

    // Append One String To Another String: first_string.append(second_string)

    cout<< "Before Appending: \n" << "str1: " << str1 << '\n' << "str2: " << str2 <<endl;
    str1.append(str2);
    cout<< "After Appending: \n" << "str1: " << str1 << '\n' << "str2: " << str2 <<endl;

    // Erase Characters From String: str_name.erase(start_index, length)

    string str4 = "This Is A Car";
    cout<< "Before Erasing, str4: " << str4 <<endl;
    str4.erase(4, 3);
    cout<< "After Erasing, str4: " << str4 <<endl;

    // Insert Into String: first_string.insert(index, second_string)

    string name = "Abhishek Layek";
    string middle = "Kumar ";
    cout<< "Before Inserting: \n" << "name: " << name << '\n' << "middle: " << middle <<endl; 
    name.insert(9, middle);
    cout<< "After Inserting: \n" << "name: " << name <<endl;

    // Append Character To String: str_name.push_back(value)

    string str5 = "Love";
    cout<< "str5: " << str5 <<endl;
    str5.push_back('R');
    cout<< "After Pushing str5: " << str5 <<endl;

    // Delete Last Character: str_name.pop_back()

    str5.pop_back();
    cout<< "After Poping str5: " << str5 <<endl;

    // Find One String In Another String

    string str6 = "Bol Do Na Zara Dil Mein Jo Hai Chupa";
    string str7 = "Dil";
    cout<< "str6: " << str6 << '\n' << "str7: " << str7 <<endl;
    if(str6.find(str7) == string::npos){
        cout<< "str7 Is Not Found In str6" <<endl;
    }
    else{
        cout<< "str7 Is Found In str6" <<endl;
    }

    // Compare Two String: first_string.compare(second_string) -> Return 0, Means Matching

    if(str6.compare(str7) == 0){
        cout<< "str6 & str7 Are Matching" <<endl;
    }
    else{
        cout<< "str6 & str7 Are Not Matching" <<endl;
    }

    // Generate Substring: str_name.substr(star_index, length)

    string sub = str6.substr(0, 13);
    cout<< "Substring: " << sub;
}