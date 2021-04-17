#include <iostream>
using namespace std;

class Point2D
{
    public:
    Point2D(int x = 0, int y = 0);

    void SetX(int x);
    void SetY(int y);
    int GetX();
    int GetY();
    void Display();

    private:

    void MyPrivateMethod();

    int mX;
    int mY;
};

Point2D::Point2D(int x, int y) {
    mX = x;
    mY = y;
}

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

int Point2D::GetY() {
    return mY;
}

int Point2D::GetX() {
    return mX;
}

int main()
{
    Point2D myPoint(10);
    myPoint.Display();

    return 0;
}