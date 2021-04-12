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
};

int main()
{
    Point2D myPoint;
    cout << "Size of myPoint is: " << sizeof(myPoint) << endl;

    return 0;
}