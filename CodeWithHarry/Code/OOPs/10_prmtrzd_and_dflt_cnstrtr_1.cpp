# include <iostream>
using namespace std;

class Complex
{
    int a, b;

    public:
        Complex(int, int); // Constructor declared
        void printData()
        {
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex :: Complex(int x, int y) // This is a parameterized constructor as it takes 2 parameters
{
    a = x;
    b = y;
    cout<<"Constructor is running ..."<<endl;
}


int main()
{
    // Implicit Call
    Complex a(4, 6);
    a.printData();

    // Explicit Call
    Complex b = Complex(5, 7);

    b.printData();
    return 0;
}