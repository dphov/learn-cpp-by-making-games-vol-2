#include<iostream>
using namespace std;

class Obj
{
public:
	Obj(int val) :mVal(val)
	{

	}
	
	inline int GetVal() const { return mVal; }

private:
	int mVal;
	
};

int main(int argc, const char* argv[])
{
	

	return 0;
}