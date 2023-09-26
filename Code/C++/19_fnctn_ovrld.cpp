# include <iostream>
using namespace std;

int sum(int a, int b)
{   
    cout<<"Using function with 2 arguements"<<endl;
    return a+b;
}
int sum(int a, int b, int c)
{
    cout<<"Using function with 3 arguements"<<endl;
    return a+b+c;
}

// Volume of cylinder
float volume(float r, float h)
{
    return (3.14*r*r*h);
}

// Volume of cube
float volume(float a)
{
    return a*a*a;
}

// Volume of cuboid
float volume(float l, float b, float h)
{
    return l*b*h;
}

int main(){
    // cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    // cout<<"The sum of 3, 7 and 6 is "<<sum(3,7,6)<<endl;
    cout<<"The colume of cube of edge = 9.3 is "<<volume(9.3)<<endl;
    cout<<"The volume of cylinder of r=2 and h=7.2 is "<<volume(2,7.2)<<endl;
    cout<<"The volume of cuboid of sides 3.5, 7.2 and 6 is "<<volume(3.5,7.2,6)<<endl;

    return 0;
}