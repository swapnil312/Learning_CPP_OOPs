# include <iostream>
using namespace std;

inline int product(int a, int b)
{
    static int c = 0; //This executes only once
    c = c+1;// Next time function is run, the value of c will be retained
    return a*b+c;
} 
float moneyRecieved(float currentMoney, float factor = 1.04)//Default arguments
{
    return currentMoney*factor;
}
// int strlen(const char* p)//Constant arguments
// {

// }

int main(){
    // int a,b;
    // cout<<"Enter value of a and b : ";
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    float money;
    cout<<"Enter money : ";
    cin>>money;




   cout<<"If u have "<<money<<" Rs in your bank account, you will recieve "<<moneyRecieved(money)<<" after one year"<<endl;
   cout<<"For VIP, If u have "<<money<<" Rs in your bank account, you will recieve "<<moneyRecieved(money,10.50 )<<" after one year";
    return 0;
}