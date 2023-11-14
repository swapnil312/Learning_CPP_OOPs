# include <iostream>
using namespace std;

int main(){
    //What is a pointer? ----> Datatype which holds the address of data of other data types...

    int a = 3;    
    int* b = &a;
    
    //& --> Address of operator
    cout<<"Address of a is "<<&a<<endl;
    cout<<"Adress of a is "<<b<<endl;
       
    //* --> Dereferencing operator (value atoperator) 
    cout<<"The value at address b is "<<*b<<endl;
    cout<<"The value at address of a is "<<*(&a)<<endl;

    // pointer to pointer
    int** c = &b;
    cout<<"c = "<<c<<endl;
    cout<<"&c = "<<&c<<endl;
    cout<<"*c = "<<*c<<endl;
    cout<<"**c = "<<**c<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"&b = "<<&b<<endl;
    cout<<"*b = "<<*b<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"&a = "<<&a<<endl;
    




    return 0;
}