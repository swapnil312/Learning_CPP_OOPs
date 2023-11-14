# include <iostream>
using namespace std;
/*
Syntax for initialization list in constructor
constructor(argument-list) : initialization-section
{
    assignment + other code;
}

class Test
{
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j) {constructor-body}
}
*/

class Test
{
    int a;
    int b;
    public:
        // Test(int i, int j) : a(i), b(j) 
        // Test(int i, int j) : a(i), b(i+j) 
        // Test(int i, int j) : a(i), b(i*j) 
        // Test(int i, int j) : a(i), b(a+j) 
        // Test(int i, int j) : b(j), a(i+b) // --> This will create problems because a will be initialized first since it is declared first, change the declation oreder of a and b ant test
        Test(int i, int j) : a(i)
        {
            b = j;
            cout<<"Constructor executed"<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
        }
        
};
int main()
{
    Test t(3,6);
    return 0;
}