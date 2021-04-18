#include <iostream>
using namespace std;

class Point2D
{
    public:
    Point2D();
    Point2D(int x, int y);
    void SetX(int x);
    void SetY(int y);
    int GetX();
    int GetY();
    void Display();

    Point2D& RefOurselves();
    Point2D* PointerOurselves();

    private:

    int mX;
    int mY;
};

Point2D::Point2D() : Point2D(0, 0)
{

}

Point2D::Point2D(int x, int y) : mX(x), mY(y)
{
    Display();
    this->Display(); // does the same thing
    mX = 0;
    this->mX = 0; // does the same thing as above
}

Point2D& Point2D::RefOurselves()
{
    return *this;
}

Point2D* Point2D::PointerOurselves()
{
    return this;
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

int main(int argc, const char * argv[])
{
    Point2D point(5, 10);

    Point2D& refPoint = point.RefOurselves();
    Point2D* ptrPoint = point.PointerOurselves();

    refPoint.Display();
    ptrPoint->Display();

    cout << "Point's address: " << &point << " refPoint is referencing: " << &refPoint << " ptrPoint is pointing to: " << ptrPoint << endl;

    return 0;
}