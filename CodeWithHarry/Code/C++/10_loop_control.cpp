// There are three types of loop:
// -> for loop
// -> while loop
// -> do while 
# include <iostream>
using namespace std;
int main()
{
    // for(int i = 1; i <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }
    // Example of infinite loop
    // for(int i = 1; 9 <= 40; i++)
    // {
    //     cout<<i<<endl;
    // }

    int i = 1;
    // while(i <= 10)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    // Example of infinite while loop
    // while(true)
    // {
    //     cout<<i<<endl;
        
    // }

    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    // while(i <= 10);
    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    // while(false); //Will run at least once even if condition is false...

    //Multipliaction Table of 6
    int x = 1;
    do
    {
        cout<<"6 x "<<x<<" = "<<(6*x)<<endl;
        x++;
    } while (x<=10);
    

    
    return 0;
}