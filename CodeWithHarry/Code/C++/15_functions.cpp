# include <iostream>
using namespace std;

// Function Protoype
// type function-name(arguements)  -->SYNTAX
int sum(int a, int b);//-->Acceptable
// int sum(int, int);//-->Acceptable
// int sum(int a,b);//-->Not Acceptable
void g(void);
int main(){

    int x,y;
    cout<<"Enter first number : ";
    cin>>x;
    cout<<"Enter second number : ";
    cin>>y;
    int ans = sum(x,y);
    //x,y are actual parameters
    cout<<"Sum of two numbers is "<<ans<<endl;
    g();
    return 0;
}
//a,b are formal parameters
int sum(int a, int b)
{
    return (a+b);
}
void g()
{
    cout<<"\nHello, Good morning...";
}