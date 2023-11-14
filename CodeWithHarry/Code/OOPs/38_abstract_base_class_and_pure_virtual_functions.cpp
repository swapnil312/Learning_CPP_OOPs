/*
Pure Virtual Functions in C++
Pure virtual function is a function that doesn’t perform any operation and the function is declared by assigning the value 0 to it. Pure virtual functions are declared in abstract classes.


Abstract Base Class in C++
Abstract base class is a class that has at least one pure virtual function in its body. The classes which are inheriting the base class must need to override the virtual function of the abstract class otherwise compiler will throw an error.

To demonstrate the concept of abstract class and pure virtual function an example program is shown below.
*/
# include <iostream>
# include <cstring>
using namespace std;

class CWH
{
    protected: 
        string title;
        float rating;
    public:
        CWH(string s, float r)
        {
            title = s;
            rating = r;
        }
        //void display
        virtual void display()=0; // do-nothing function --> pure virtual function
        //Its compulsory to overiride this function in derived class i.e to define it each of the derived classes.
};

class CWHVideo : public CWH
{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vL): CWH(s, r)
        {
            videoLength = vL;

        }
        void display()
        {
            cout<<"This is an amazing video with tile "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};

class CWHText : public CWH
{
    int words;
    public:
        CWHText(string s, float r, int wC): CWH(s, r)
        {
            words = wC;
            
        }
        void display()
        {
            cout<<"This is an amazing text tutorial with tile "<<title<<endl;
            cout<<"Ratings of this tutorial: "<<rating<<" out of 5 stars"<<endl;
            cout<<"No of words in this text tutorial is: "<<words<<" words."<<endl;
        }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    //for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    //for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.29;
    CWHText djText(title, rating, words);
    // djText.display();

    
    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

/*
Rules for virtual functions
1. They cannot be static
2. They are accessed by object pointers
3. Virtual functions can be friend of another class
4. A virtual function in base class might not be used. 
5. If a virtual function is defined in the base class, there is no neccessity of redifiing it in the derived class.
*/