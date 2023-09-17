#include <iostream>
using namespace std;
 
int main()
{
    int a = 4, b = 5;
    cout<<endl;
    
    // Arithmetic Operators
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;
    cout<<endl;

    //Relational Operators
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout<<endl;

    //Logical Operators
    cout << "The value of a && b is " << (a && b) << endl;
    cout << "The value of a || b is " << (a || b) << endl;
    cout << "The value of !a is " << (!a) << endl;
    cout<<endl;
      
    //Bitwise Operators
    cout << "The value of a & b is " << (a & b) << endl;
    cout << "The value of a | b is " << (a | b) << endl;
    cout << "The value of a ^ b is " << (a ^ b) << endl;
    cout << "The value of ~a is " << (~a) << endl;
    cout << "The value of a >> 2 is " << (a >> 2) << endl;
    cout << "The value of a << 2 is " << (a << 2) << endl;
    cout<<endl;

    //Assignment Operators
    a = 0;
    b = 1;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<endl;

    return 0;
}
