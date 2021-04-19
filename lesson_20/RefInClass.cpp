#include <iostream>
using namespace std;

struct A
{
	A(): A(0) {}
	A(int x): mX(x) {}

	int mX;
};

class B
{
public:

	B(A& a);

	void Display()
	{
		std::cout << mARef.mX << std::endl;
	}
private:
	A& mARef;
};

B::B(A& a): mARef(a)
{
}

int main(int argc, const char* argv[])
{
	A myA(10);

	B myB(myA);

	myB.Display();

	return 0;
}