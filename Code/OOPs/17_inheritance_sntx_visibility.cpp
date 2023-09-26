# include <iostream>
using namespace std;

//Base Class
class Employee
{
    // int id;
    // float salary;
    public:
        int id;
        float salary;
        Employee(int inpId)
        {
            id = inpId;
            salary = 34;
        }
        Employee(){}
    
};

//Derived Class
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//     member/methods etc
// };
/*
Note  
--> Default visibilty mode is private
--> Private visibility mode: Public members of the base class becomes private members of the child class
--> Public visibility mode: Public members of the base class becomes public members of the child class
--> Private members of base class can never be inherited
*/
// Creating a programmer class derived fom Employee Base class...
// class Programmer : public Employee
class Programmer : Employee
{   
    public:
        int languageCode;
        Programmer(int inpId)
        {
            id = inpId;
            languageCode = 9;
        }
        void getData()
        {
            cout<<id<<endl;
        }
        
};

int main()
{
    Employee swapnil(1), rohan(2);
    cout<<swapnil.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer skillf(10);
    cout<<skillf.languageCode<<endl;
    skillf.getData();
    return 0;
}