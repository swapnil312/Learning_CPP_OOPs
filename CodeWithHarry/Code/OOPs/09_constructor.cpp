#include <iostream>
using namespace std;

class Complex
{
    int a, b;

    public:
        // Creating a constructor
        // Constructor is a special member function with same name as of the class. It is automatically invoked.
        //  It is used to initilaize the objects of its class

        Complex(void); // Constructor declared
        void printData()
        {
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex :: Complex(void) // This is a default constructor as it accepts no parameters
{
    a = 0;
    b = 0;
    cout<<"Constructor is running ..."<<endl;
}

int main()
{
    Complex c1,c2,c3;
    c1.printData();
    c2.printData();
    c3.printData();
    return 0;
}

/*
Characteristics of Constructor
1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is called.
3. Theyb cannot have return values and do not have return types
4. It can have default arguments
5. We cannot refer to their address
*/