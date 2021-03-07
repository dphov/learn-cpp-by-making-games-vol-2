#include <iostream>
using namespace std;

class Point2D
{
    public:

    void SetX(int x);
    void SetY(int y);
    void GetX();
    void GetY();
    void Display();

    private:

    int mX;
    int mY;
    bool mNewPrivateMember;
};

void Point2D::SetX(int x)
{
    mX = x;
}


void Point2D::SetY(int y)
{
    mY = y;
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