// Common parts like member functins are alloted the same memory for all objects whereas unique parts like member variablea are alloted differenent memory for each object
# include <iostream>
using namespace std;



class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void){ counter = 0;}
        void setPrice(void);
        void displayPrice(void);
};

void Shop :: setPrice(void)
{
    
    cout<<"Enter Id of you item no "<<(counter+1)<<" : ";
    cin>>itemId[counter];
    cout<<"Enter price of you item : ";
    cin>>itemPrice[counter];
    counter++;
}

void Shop :: displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}