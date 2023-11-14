# include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;
    public:
        void setData(int a, float b)
        {
            id = a;
            price = b;
        }
        void getData(void)
        {
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};

int main()
{
    int size = 2;
    // General store item
    // Veggies item
    // Hardware item
    Shop *ptr = new Shop[size];
    Shop* ptr_temp = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter id and price of item "<<i+1<<": ";
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    ptr = ptr_temp;
    for (int i = 0; i < size; i++)
    {
        cout<<"Item number "<<i+1<<endl;
        ptr->getData();
        cout<<endl;
        ptr++;
    }
    
    return 0;
}