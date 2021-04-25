#include<iostream>
#include<string>

using namespace std;

class B
{
public:
	B(int value) :mValue(value)
	{

	}

	int Value()
	{
		return mValue;
	}

	void SetValue(int value)
	{
		mValue = value;
	}
private:
	int mValue;
};

class A
{
public:
	A():mB(0)
	{

	};

	~A()
	{

	};

	void SetValue(int value)
	{
		mB.SetValue(value);
	}

	void Display()
	{
		std::cout << "A's value is: " << mB.Value() << std::endl;
	}

private:
	B mB;
};