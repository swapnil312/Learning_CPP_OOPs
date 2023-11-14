# include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a+b;
    return c;
}
//This will not swap a and b
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }


//Call by reference using pointers
void swappntr(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Call by reference using reference variables
void swaprefvar(int &a, int &b)
{
    int temp = a; 
    a = b;
    b = temp;
}

int & swaprefvar1(int &a, int &b)
{
    int temp = a; 
    a = b;
    b = temp;
    return a;
}

int main(){
    int a = 4, b = 5;
    // cout<<"The sum of 4 and 5 is "<<sum(a,b)<<endl;
    cout<<"Before swapping, the value of a is "<<a<<" and the value of b is "<<b<<endl;
    // swap(a,b); // This will not swap a and b
    // swappntr(&a,&b); // This will swap a and b using pointers
    swaprefvar(a,b); // This will swap a and b using reference variables
    // swaprefvar1(a,b) = 566; //Returning reference...
    cout<<"After swappning, the value of a is "<<a<<" and the value of b is "<<b<<endl;
    
    return 0;
}