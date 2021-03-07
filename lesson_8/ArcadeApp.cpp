#include <iostream>
using namespace std;

class Point2D
{
public:

    void Set(int dx, int dy);
    void Display();

private:

    int mX;
    int mY;

};

void Point2D::Set(int dx, int dy)
{
    mX = dx;
    mY = dy;
}

void Point2D::Display()
{
    cout << "X: " << mX << ", Y: " << mY << endl;
}

int main()
{
    Point2D point;

    point.Set(10, 5);
    point.Display();

    Point2D point2;
    point2.Set(7, 11);
    point2.Display();

    return 0;
}