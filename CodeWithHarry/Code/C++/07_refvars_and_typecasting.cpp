# include <iostream>
using namespace std;
int c = 56;
int main()
{
    // int a,b,c;
    // cout<<"Enter the value of a: ";
    // cin>>a;
    // cout<<"Enter the value of b: ";
    // cin>>b;
    // c = a+b;
    // cout<<"The sum is "<<c<<endl;
    // //:: -> Scope Resolution Operator (Used acceess global scope of a variable.)
    // cout<<"The global c is "<<::c<<endl;

    // float d = 34.4F;
    // long double e = 34.4L;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    // cout<<"The value of d is : "<<d<<endl<<"The value of e is : "<<e<<endl;

    //Reference Variables -> Assume it different names of the same person...

    // float x = 453;
    // float & y = x;
    // cout<<y<<endl;
    // cout<<x<<endl;

    //TypeCasting

    int a = 45;
    float b = 45.72;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int(b);
    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;
    return 0;
}