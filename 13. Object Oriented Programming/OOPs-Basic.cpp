/* Object Oriented Programming */

#include<iostream>
#include<string>
using namespace std;

// Class: Is A Blueprint For Creating Objects
// Empty Class Have Size 1 Byte

class Student{

// By Default Every Properties & Behaviors Are Private (Only Accessiable In The Local Scope Where It Is Defined)
// To Make It Accessiable Everywhere In The Program We Have To Use 'public' keyword.

    private:
        string gf;

    public:

        // Prperties Or attributes
        int id;
        string name;
        int age;
        int nos;

        // Behavior Or Methods Or Function
        void study(){
            cout<< "Studying";
        }
        void sleep(){
            cout<< "Sleeping";
        }
        void bunk(){
            cout<< "Bunking";
        }

    private:
        void gfchatting(){
            cout<< "Chatting With GirlFriend";
        }
    
    /* Constructor(ctor): Create Instance Of Class */ 
   // Note:- We Have To Make The Constructor As Public.

public:

    // Default Constructor: Assign Garbadge value. If We Don't Write Any Constructor, Compiler Adds A Default Constructor Automatically.
    Student(){
        cout<< "Default ctor Called" <<endl;
    }

    // Parameterized Constructor Without gf 
    Student(int _id, string _name, int _age, int _nos){
        cout<< "Patermeterized Ctor Without Gf Called" <<endl;
        id = _id;
        name = _name;
        age = _age;
        nos = _nos;
    }

    // Parameterized Constructor With gf
    Student(int id, string name, int age, int nos, string gf){
        cout<< "Patermeterized Ctor With Gf Called" <<endl;
        this->id = id;
        this->name = name;
        this->age = age;
        this->nos = nos;
        this->gf = gf;
    }

    // Copy Constructor
    // If We Don't Write Any Copy Constructor, Compiler Adds A Default Copy Constructor Automatically.

    /* We Take srcobj As Source Object Of Student Class And Make It const So That It Will Not Change The Member Variables Of Source Object
    If We Take srcobj By value So A New Copy Of srcobj Will Be Create Before We Create The Copy Constructor, It Is Contradiction.
    So We Take srcobj By Referrence  */

    Student(const Student &srcobj){
        cout<< "Copy Ctor Called" <<endl;
        this->id = srcobj.id;
        this->name = srcobj.name;
        this->age = srcobj.age;
        this->nos = srcobj.nos;
        this->gf = srcobj.gf;
    }

    /* Destructor(dtor): Delete The Instance Of Class */
    // If We Don't Write Any Destructor, Compiler Adds A Default Destructor Automatically

    ~Student(){
        cout<< "Default dtor Called" <<endl;
    }

    /* Getter And Setter Function*/

    string GetGfName(){
        return gf;
    }

    void SetGfName(string name){
        this->gf = name;
    }
};

int main(){
    
    // Object: Instance Of Class

    // Static Way To Create Object (Object Created In Stack)

    Student s1;   // s1 Is A Object Of Student Class
    s1.id = 1;
    s1.name = "Sayan";
    s1.age = 22;
    s1.nos = 5;
    cout<< "Name Of Student 1: " << s1.name <<endl;      // In The Case Of Stack We Have To Access Properties And Behavior Using '.'

    Student s2(2, "Raktim", 23, 5);
    cout<< "Name Of Student 2: " << s2.name <<endl;

    Student s3(3, "Abhishek", 22, 5 , "Payel");
    cout<< "Name Of Student 3: " << s3.name <<endl;

    // Dynamic Way To Create Object (Object Created In Heap)

    Student *s4 = new Student(4, "Deep", 22, 5);
    cout<< "Name Of Student 4: " << s4->name <<endl;  // In The Case Of Heap We Have To Access Properties And Behavior Using '->'

    delete s4;  // We Have To Delete Whatever We create In Heap Otherwise There Will Be Memory Leak

    Student s5(5, "Virat", 24, 5, "Tamannah");
    cout<< "Name Of Student 5: " << s5.name <<endl;
    cout<< "Then Girlfriend Of Virat Is: " << s5.GetGfName() <<endl;
    s5.SetGfName("Anushka");
    cout<< "Now Girlfriend Of Virat Is: " << s5.GetGfName() <<endl;
    
    // Copy s5 into s6
    Student s6 = s5;
    cout<< "Name Of Student 6: " << s6.name <<endl;

    // The Lifetime Of The Objects Is Within This Block Where They Are Created

    return 0;  // After This Line The Objects Will Be Destroyed By dtor
}