# include <iostream>
using namespace std;
//n! = n*(n-1)!
int fact(int n)
{
    if(n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int fibo(int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }

    else
    {
        return fibo(n-1) + fibo(n-2);
    }
}

int main(){
    // int n;
    // cout<<"Enter a positive number whose factorial u want to find out : ";
    // cin>>n;
    // cout<<"Factorial of "<<n<<" is "<<fact(n)<<". "<<endl;
    int x;
    cout<<"Enter position(starts with 1) of fibonacci term : ";
    cin>>x;
    cout<<"Fibonacci number at positin "<<x<<" is "<<fibo(x);

    return 0;
}