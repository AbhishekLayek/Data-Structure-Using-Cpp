/* C++ Function To Convert Kilometer To Miles And Vice Verca */

#include<iostream>
using namespace std;
float Km_To_Mile(float km){
    float mile = (km * 0.621371);
    return mile;
}
float Mile_To_Km(float mile){
    float km = (mile * 1.609344);
    return km;
}
int main(){
    int choice;
    float km, mile;
    cout<< "To Convert Kilometer To Mile Press 1"<<endl;
    cout<< "To Convert Mile To Kilometer Press 2"<<endl;
    cout<< "Enter A Choice: ";
    cin >> choice;
    if(choice == 1){
        cout<< "Enter The Distance In Kilometer: ";
        cin>> km;
        float mile = Km_To_Mile(km);
        cout<< "Distance In Mile = " << mile;
    }
    else if(choice == 2){
        cout<< "Enter The Distance In Mile: ";
        cin>> mile;
        float km = Mile_To_Km(mile);
        cout<< "Distance In Kilometer = " << km;
    }
    else{
        cout<< "Please Choose A Valid Option";
    }
}