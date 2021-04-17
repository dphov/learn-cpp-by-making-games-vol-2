#include <iostream>
#include <string>

using namespace std;

class A
{
public:
	A() :A("") {};
	A(const std::string& strVal): mStrVal(strVal) {}
	~A()
	{
		std::cout << "Destroying: " << mStrVal << std::endl;
	}
private:
	string mStrVal;
};

class B
{
public:
	B() : mA1("A1"), mA2("A2") {}
private:
	A mA1;
	A mA2;
};

int main(int argc, const char* argv[]) {
	{
		B myB;
	}

	return 0;
}