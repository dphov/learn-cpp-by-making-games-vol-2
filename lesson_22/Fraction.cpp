#include <sstream>
#include <iostream>


class Fraction
{
public:
	Fraction(): Fraction(0,1){}
	Fraction(int a, int b): mNumerator(a), mDenominator(b)
	{
	}
	static Fraction Add(const Fraction & a, const Fraction & b) {
		std::cout << Fraction::AsString(a) << " + " << Fraction::AsString(b) << std::endl;


		Fraction temp;
		temp.mNumerator = a.mNumerator + b.mNumerator;

		if (a.mDenominator == b.mDenominator)
		{
			temp.mDenominator = a.mDenominator;
		}
		else
		{
			throw std::invalid_argument("received non equal denominators");
		}

		std::cout << "Result: " << Fraction::AsString(temp) << std::endl;

		return temp;
	}
	static Fraction Substract(const Fraction& a, const Fraction& b)   {
		std::cout << Fraction::AsString(a) << " - " << Fraction::AsString(b) << std::endl;

		Fraction temp;
		temp.mNumerator = a.mNumerator - b.mNumerator;

		if (a.mDenominator == b.mDenominator)
		{
			temp.mDenominator = a.mDenominator;
		}
		else
		{
			throw std::invalid_argument("received non equal denominators");
		}
		std::cout << "Result: " << Fraction::AsString(temp) << std::endl;

		return temp;
	}
	static Fraction Multiply(const Fraction& a, const Fraction& b)   {
		std::cout << Fraction::AsString(a) << " * " << Fraction::AsString(b) << std::endl;

		Fraction temp;
		temp.mNumerator = a.mNumerator * b.mNumerator;
		temp.mDenominator = a.mDenominator * b.mDenominator;
		// Simplify the fraction by dividing throughout by their GCD

		std::cout << "Result: " << Fraction::AsString(temp) << std::endl;
		return temp;

	}
	static Fraction Divide(const Fraction& a, const Fraction& b)   {}
	void CompareFractions(Fraction* a, Fraction* b) const {}

	/* Prints fraction in formatted manner as "1/2"*/
	static std::string AsString(const Fraction& a)
	{
		std::ostringstream ConvertNumerator;
		std::ostringstream ConvertDenominator;

		ConvertNumerator << a.mNumerator;
		ConvertDenominator << a.mDenominator;

		std::string tempNumerator = ConvertNumerator.str();
		std::string tempDenominator = ConvertDenominator.str();

		std::string temp = tempNumerator + "/" + tempDenominator;

		return temp;
	}

	static void Display(Fraction & a) {
		std::cout << a.mNumerator << "/" << a.mDenominator << std::endl;
	}

private:
	int mNumerator;
	int mDenominator;

	Fraction GreatestCommonDivisor(const int a, const int b) {}
};

int main()
{
	Fraction fObj1 = Fraction(1, 4);
	Fraction fObj2 = Fraction(2, 4);
	Fraction::Display(fObj1);
	Fraction::Display(fObj2);

	Fraction result = Fraction::Add(fObj1, fObj2);
	Fraction result2 = Fraction::Substract(result, fObj2);

    Fraction fObj3 = Fraction(2, 3);
	Fraction fObj4 = Fraction(9, 4);
	Fraction result3 = Fraction::Multiply(fObj3, fObj4);


	return 0;
}