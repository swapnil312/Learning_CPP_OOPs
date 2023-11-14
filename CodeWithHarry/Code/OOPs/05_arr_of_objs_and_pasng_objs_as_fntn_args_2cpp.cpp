# include <iostream>
using namespace std;

class complex
{
    int r;
    int i;

    public:

        void setData(int a, int b)
        {
            r = a;
            i = b;
        }
        
        void setDataBySum(complex o1, complex o2)
        {
            r = o1.r + o2.r;
            i = o1.i + o2.i;
        }

        void display()
        {
            cout<<"Your complex number is "<<r<<" + "<<i<<"i"<<endl;
        }
};

int main()
{
    complex o1,o2,o3;
    o1.setData(3,4);
    o1.display();
    o2.setData(2,4);
    o2.display();
    o3.setDataBySum(o1,o2);
    o3.display();

    return 0;
}