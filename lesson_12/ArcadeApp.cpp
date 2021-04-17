#include <iostream>
using namespace std;

struct SPoint2D
{
    void SetX(int x);
    void SetY(int y);
    int GetX();
    int GetY();
    void Display();

    int mX;
    int mY;
};

class CPoint2D
{
    void SetX(int x);
    void SetY(int y);
    int GetX();
    int GetY();
    void Display();

    int mX;
    int mY;
};

int main()
{
    SPoint2D structPoint;
    CPoint2D classPoint;

    structPoint.SetX(0); // will work
    classPoint.SetX(0); // will not work, private members by default

    return 0;
}