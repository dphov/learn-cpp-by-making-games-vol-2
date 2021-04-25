#include<iostream>
#include<vector>
using namespace std;

class B
{
public:
	B(int value) :mValue(value){}

	int Value() {return mValue;}
private:
	int mValue;
};

int main(int argc, const char* argv[])
{
	vector<B> myBvec; // <-- no object was created, only the container
	return 0;
}