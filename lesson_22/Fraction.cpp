#include <iostream>

class Fraction
{
public:
	Fraction(): Fraction(0,1){}
	Fraction(int a, int b): mNumerator(a), mDenominator(b)
	{
	}
	int Add() {}
	int	Substract() {}
	int	Multiply() {}
	int Divide() {}
	void CompareFractions(Fraction * a, Fraction * b) {}
	/* Prints fraction in formatted manner as "1/2"*/
	void Display() {}
private:
	int mNumerator;
	int mDenominator;
};

int main()
{
	Fraction 
	std::cout << "Hi" << std::endl;
	return 0;
}