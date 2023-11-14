# include <iostream>
using namespace std;

class A
{
    int a;
    public:
        // void set_Data(int a)
        A & set_Data(int a)
        {
            this->a = a;
            return *this;
        }
        void get_Data(void)
        {
            cout<<"The value of a is "<<a<<endl;
        }
};

int main()
{
    //this is a keyword which is a pointer which points to the object which invokes the member function
    A a;
    a.set_Data(4).get_Data();
    // a.get_Data();
    return 0;
}