//Recap 
// OOPs - Classes and Objects
    // C++ --> initially called C with classes
    // Class --> Extension of structures(in C)
    // Structures had limitations 
    //      - Members are public
    //      - No methods
    // classes --> structures + more
    // classes --> can have method and properties
    // classes --> can make few members as private and few as public
    // Structures in C++ are typedef
    // you can declare objects along with class declaration
        /*class Employee
        {

        }swapnil, nikki, jiman;*/
    // swapnil.salary = 10 makes no sense if salary is private


    // Nesting of Member Functions

# include <iostream>
# include <string>
using namespace std;

class binary
{
    //Default access speccifier is private
    string s;
    void chk_bin(void);
    public:  
        void read(void);
           
        void ones_compliment(void);   
        void display(void);  
};

void binary :: read(void)
{
    cout<<"Enter a binary number : ";
    cin>>s;
}

void binary :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '0'  &&   s.at(i) != '1')
        {
            cout<<"Incorerect binary format."<<endl;
            exit(0);
            // The function exit(0) is a jump statement of C++. It is used to terminate the program or let the control exit out of the program. It reports the operating system about the successful termination of the program which indicates to the operating system that the task of the program has been successfully completed.

            // Google exit(0) and exit(1) and read....
        }
        
    }
    cout<<"Correct binary format."<<endl; 
}

void binary :: ones_compliment(void)
{
    chk_bin();  //Nesting of member function
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '0' )
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
        
    }
}

void binary :: display(void)
{
    cout<<"Displaying your binary number."<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
    
    

    binary b;
    b.read();
    // b.chk_bin();
    b.ones_compliment();
    b.display();



    return 0;
}