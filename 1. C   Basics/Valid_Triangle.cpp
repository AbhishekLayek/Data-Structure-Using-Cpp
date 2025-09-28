// C++ Program To Check Whether A Triangle is Valid Or Not.

#include<iostream>
using namespace std;
int main(){
    int s1, s2, s3;
    cout<< "Enter 1st Side Of The Triangle: ";
    cin>> s1;
    cout<< "Enter 2nd Side Of The Triangle: ";
    cin>> s2;
    cout<< "Enter 3rd Side Of The Triangle: ";
    cin>> s3;
    if(((s1 + s2) > s3) && ((s2 + s3) > s1) && ((s1 + s3) > s2)){
        cout<< "The Triangle Is Valid";
    }
    else{
        cout<< "The Triangle Is Invalid";
    }
}