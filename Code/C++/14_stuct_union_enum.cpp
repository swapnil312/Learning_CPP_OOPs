# include <iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;

union money{            //one at a time
    int rice;           //allots memory of the highest size of data type
    //can use one var at a time
    char car;
    float pounds;
};


int main(){
     
    // ep Swapnil;
    // union money m1;
    // m1.rice = 78;
    // m1.car = 'c';
    // cout<<m1.car<<endl; 
    // Swapnil.eId = 21;
    // Swapnil.favChar = 'S';
    // Swapnil.salary = 1200000000000;
    // cout<<Swapnil.eId<<endl;
    // cout<<Swapnil.favChar<<endl;
    // cout<<Swapnil.salary<<endl;

    enum Meal{breakfast,lunch,dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    Meal m1 = lunch;
    cout<<m1;

    return 0;
}