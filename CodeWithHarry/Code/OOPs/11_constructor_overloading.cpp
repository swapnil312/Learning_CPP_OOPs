# include <iostream>
using namespace std;

class Complex
{
    int a, b;
    public:
        Complex(int x, int y)
        {
            a = x;
            b = y;
        }
        Complex(int x)
        {
            a = x;
            b = 0;
        }
        Complex(void)
        {
            a = 0;
            b = 0;
        }

        void printNumber()
        {
            cout<<"Your number is "<<a<<" + "<<b<<"i."<<endl;
        }
};

int main()
{
    Complex c1(4,6);
    Complex c2(2);
    Complex c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}