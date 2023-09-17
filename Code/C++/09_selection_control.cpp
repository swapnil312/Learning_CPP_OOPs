# include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Tell me ur age : ";
    cin>>age;

    // // Selection control structure : if-else ladder...
    // if((age>0)&&(age<18)){
    //     cout<<"U cannot come to my party...";
    // }
    // else if(age == 18){
    //     cout<<"You are a kid and you will get a kid pass to the party...";
    // }
    // else if(age < 1)
    // {
    //     cout<<"You are not yet born"<<endl;
    // }
    // else
    // {
    //     cout<<"U can come to the party...";
    // }

    // Selection control structure : switch case...
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 2:
        cout<<"You are 2"<<endl;
        break;
    
    default:
        cout<<"No special cases..."<<endl;
        break;
    }
    return 0;
}