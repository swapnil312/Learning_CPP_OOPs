# include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;
    public:
        void set_Data(int a, int b)
        {
            real = a;
            imaginary = b;
        }
        void get_Data()
        {
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;

        }
};

int main()
{
    Complex c1;
    // Complex* ptr = &c1;
    Complex* ptr = new Complex;

    // c1.set_Data(1,56);
    // c1.get_Data();
    // (*ptr).set_Data(2,5); is exactly same as
    ptr->set_Data(2,5);
    // (*ptr).get_Data(); is as good as
    ptr->get_Data();


    //Array of objects

    Complex* ptr1 = new Complex[4];

    ptr1->set_Data(1,4);
    ptr1->get_Data();


    return 0;
}