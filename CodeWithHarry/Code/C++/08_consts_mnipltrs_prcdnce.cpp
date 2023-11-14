# include <iostream>
# include <iomanip>
// For manipulators iomanip (used to manipulate display)
using namespace std;

int main()
{
    // int a = 34;
    // cout<<"The value of a was : "<<a<<endl;
    // a = 54;
    // cout<<"The value of a is : "<<a<<endl;
    // Constants in C++
    // const int a = 3;
    // cout<<"The value of a was : "<<a<<endl;
    // a = 54; //error: assignment of read-only variable 'a'
    // cout<<"The value of a is : "<<a<<endl;

    // int a = 3, b = 78, c = 3423;
    // cout<<"The value of a without setw is "<<a<<endl;
    // cout<<"The value of b without setw is "<<b<<endl;
    // cout<<"The value of c without setw is "<<c<<endl;
    // // setwidth() -> Takes 4 chars (width)
    // cout<<"The value of a is "<<setw(4)<<a<<endl;
    // cout<<"The value of b is "<<setw(4)<<b<<endl;
    // cout<<"The value of c is "<<setw(4)<<c<<endl;

    // Operator Precedence
    // Use c++ reference Google c++ reference
    int a = 3, b = 4;
    // int c = a*5+b-45+84;
    int c = ((((a*5)+b)-45)+84);
    
    cout<<c;

    return 0;
}