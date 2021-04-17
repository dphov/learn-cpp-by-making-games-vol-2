#include <iostream>
using namespace std;

class Point2D
{
    public:

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
    Point2D myPoint;
    myPoint.SetX(0);
    
    cout << "Size of myPoint is: " << sizeof(myPoint) << endl;

    return 0;
}