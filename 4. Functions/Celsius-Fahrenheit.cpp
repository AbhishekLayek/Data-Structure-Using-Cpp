/* C++ Program To Covert Temperature From Celsius To Fahrenheit And Vice Versa */

#include<iostream>
using namespace std;
float Celsius_To_Fahrenheit(float celsius){
    float fahrenheit = ((9 * celsius) / 5) + 32;
    return fahrenheit;
}
float Fahrenheit_To_Celsius(float fahrenheit){
    float celsius = (5 * (fahrenheit - 32)) / 9;
    return celsius;
}
int main(){
    int choice;
    float celsius, fahrenheit;
    cout<< "To Convert Celsius To Fahrenheit Press 1"<<endl;
    cout<< "To Convert Fahrenheit To Celsius Press 2"<<endl;
    cout<< "Enter A Choice: ";
    cin >> choice;
    if(choice == 1){
        cout<< "Enter The Temperature In Celsius: ";
        cin>> celsius;
        float fahrenheit = Celsius_To_Fahrenheit(celsius);
        cout<< "Temperature In Fahrenheit = " << fahrenheit;
    }
    else if(choice == 2){
        cout<< "Enter The Temperature In Fahrenheit: ";
        cin>> fahrenheit;
        float celsius = Fahrenheit_To_Celsius(fahrenheit);
        cout<< "Temperature In Celsius = " << celsius;
    }
    else{
        cout<< "Please Choose A Valid Option";
    }
}