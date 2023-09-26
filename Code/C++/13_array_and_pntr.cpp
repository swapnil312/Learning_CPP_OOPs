# include <iostream>
using namespace std;

int main(){
    int marks[] = {34,54,32,56,32};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]< <endl;
    int* p = marks;
    for (int i = 0; i < 5; i++)
    {
        // cout<<marks[i]<<endl;
        // cout<<*p<<endl;
        // p++;
        cout<<*(p+i)<<endl;
    }
    
    return 0; 
}