/* Const Keyword: It Is Used To Declare That A Variable, Function Or Object Is Immutable i.e, Its Value Cannot Be Changed After 
Initialization */

#include<iostream>
using namespace std;

class abc{
    private:
        int x;
        int *y;
        const int z;
        mutable int m;

    public:

        // Old Way: Parameteraized Constructor
        // Disadvantage: We Can't Initialize Const Variable

        // abc(int _x, int _y, int _z = 0){
        //     x = _x;
        //     y = new int(_y);
        //     z = _z;
        // }

        // New Way: Initialization List
        // Advantage: We Can Initialize Const Variable

        abc(int _x, int _y, int _z = 0): x(_x), y(new int(_y)), z(_z){
            *y = *y * 2;
        }

        // Getter & Setter Functions
        // Const Methods: Can't Change The Member Variables
        // To Break The Const: Declare The Member Variable As mutable

        int getX() const
        {
            return x;
        }

        void setX(int val)
        {
            x = val;
        }

        int getY() const
        {
            return *y;
        }

        void setY(int val)
        {
            *y = val;
        }

        int getZ() const
        {
            return z;
        }

        int getM() const
        {
            m = 10;
            return m;
        }
};

void PrintABC(const abc &a){
    cout<< "x = " << a.getX() <<endl;
    cout<< "y = " << a.getY() <<endl;
    cout<< "z = " << a.getZ() <<endl;
    cout<< "m = " << a.getM() <<endl;
}

int main(){
    abc a(1, 2, 3);
    PrintABC(a);
}

int main2(){
    
    // Const Variable: We can't Change The Value Of The Variable After Initialization

    const int x = 5;
    cout<< x <<endl;

    /* Const With Pointers */

    // 1. Const Data But Non-Const Pointer 

    const int *a = new int(2);  // Same as - int const *a = new int(2);
    // *a = 4;   // we Can't Change The Data
    cout<< *a <<endl;
    delete a;   // there will be a memory leak so, we have to delete a
    int b = 6;
    a = &b;    // we can change the pointer
    cout<< *a <<endl;

    // 2. Non-Const Data But Const Pointer

    int *const c = new int(8);
    cout<< *c <<endl;
    *c = 10;      // we can change the data
    cout<< *c <<endl;
    delete c;
    int d = 12;
    // c = &d;  // we can't change the pointer

    // 3. Const Data And Const Pointer

    const int *const e = new int(14);
    cout<< *e <<endl;
    // *e = 16;  // we can't change the data
    delete e;
    int f = 18;
    // e = &f;  // we can't change the pointer

    return 0;
}