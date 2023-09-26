# include <iostream>
# include <cmath>
using namespace std;

class Point
{
    int x, y;
    friend float distance_btn_two_points(Point p1, Point p2);
    public:
        Point(int a, int b)
        {
            x = a;
            y = b;
        }

        void displayPoint()
        {
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }
}; 

float distance_btn_two_points(Point p1, Point p2)
{
    float d = sqrt(((p1.x - p2.x)*(p1.x - p2.x))+((p1.y - p2.y)*(p1.y - p2.y)));
    return d;
}

int main()
{
    Point p(0, 0);
    p.displayPoint();
    Point q(3, 4);
    q.displayPoint();
    cout<<"Distance between two points is "<<distance_btn_two_points(p,q)<<" units.";
    return 0;
}