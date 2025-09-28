/* Diamond Probelem: When Two Super Classes Of A Class Share A Base Class, Then Diamond Problem Arises */

#include<iostream>
using namespace std;

// Base Class Of Teacher and Researcher Class 
class Person{
    public:
        void talk(){
            cout<< "Talking..." <<endl;
        }
};

// 1st Base Class Of Pofessor Class
class Teacher: virtual public Person{
    public:
        void teach(){
            cout<< "Teaching..." <<endl;
        }
};

// 2nd Base Class Of Pofessor Class
class Researcher: virtual public Person{
    public:
        void research(){
            cout<< "Researching..." <<endl;
        }
};

// Derived Class (Inherited From 1st and 2nd Base Class)
class Professor: public Teacher, public Researcher{
    public:
        void lecture(){
            cout<< "Giving Lecture..." <<endl;
        }
};

int main(){
    Professor p;

    // Teacher Class and Researcher Class Inherited From Person Class (Having talk() Method). 
    // Professor Class Inherited From Teacher Class And Researcher Class.
    // When We Create Object Of Professor Class And Trying To Access talk() Method The Compiler Get Confused, As There Is Two talk() Method.
    
    // Professor -> Teacher -> Person (talk())
    // Professor -> Researcher -> Person (talk())

    // p.talk();  // Diamond Problem: talk() is ambiguous

    /* SOLUTION */

    // 1st Solution: Scope Resolution (::)

    p.Teacher::talk();     // Professor -> Teacher -> Person (talk())
    
    p.Researcher::talk(); // Professor -> Researcher -> Person (talk())

    // 2nd Solution: Virtual Keyword (We have To Make Teacher & Researcher Class Inherits Person Class Vitually)

    p.talk();
}