#include <iostream>
#include <vector>

using namespace std;

class Fraction
{
public:
	Fraction(): Fraction(0,1){}
	Fraction(int a, int b): mNumerator(a), mDenominator(b)
	{
	}

	Fraction GetFraction(int a, int b) {
	    return {a, b};
	}

	void SetValues(int a, int b) {
	    this->mNumerator = a;
	    this->mDenominator = b;
	}


	int gcd(int a, int b)
	{
        if (a == 0)
            return b;

        return gcd(b % a, a);

	}

	Fraction Simplify(int a, int b)
	{
	    int gcd = this->gcd(a, b);
	    const int numerator = a / gcd;
	    const int denominator = b / gcd;

	    return this->GetFraction(numerator, denominator);
	}

	Fraction Add(Fraction & a, Fraction & b)
	{
	    Fraction l_Fraction;

	    if( a.mDenominator == b.mDenominator )
	    {
	        const int numerator = a.mNumerator + b.mNumerator;
	        const int denominator = a.mDenominator;

	        l_Fraction = this->Simplify(numerator, denominator);
	    }
	    else
	    {
	        const int numerator = a.mNumerator * b.mDenominator + b.mNumerator * a.mDenominator;
	        const int denominator = a.mDenominator * b.mDenominator;

	        l_Fraction = this->Simplify(numerator, denominator);
	    }

	    return l_Fraction;
    }

	Fraction Subtract(Fraction & a, Fraction & b)
	{
	    Fraction l_Fraction;

	    if( a.mDenominator == b.mDenominator )
	    {
	        const int numerator = a.mNumerator - b.mNumerator;
	        const int denominator = a.mDenominator;

	        l_Fraction = this->Simplify(numerator, denominator);
	    }
	    else
	    {
	        const int denominator = a.mDenominator * b.mDenominator;
	        const int aNumerator =  a.mNumerator * b.mDenominator;
	        const int bNumerator = b.mNumerator * a.mDenominator;
            int numerator ;

	        if (aNumerator > bNumerator) {
	            numerator = aNumerator - bNumerator;
	        } else {
	            numerator = bNumerator - aNumerator;
	        }

	        l_Fraction = this->Simplify(numerator, denominator);
	    }

	    return l_Fraction;
	}

	Fraction Multiply(Fraction & a, Fraction & b) {
	    const int numerator = a.mNumerator * b.mNumerator;
	    const int denominator =  a.mDenominator * b.mDenominator;

	    return this->Simplify(numerator, denominator);
	}

	Fraction Divide(Fraction & a, Fraction & b) {
	    const int numerator = a.mNumerator * b.mDenominator;
	    const int denominator =  a.mDenominator * b.mNumerator;

	    return this->Simplify(numerator, denominator);
	}

	void CompareFractions(Fraction * a, Fraction * b) {}


	void Display() const {
	    if (this->mDenominator == 1) {
	        std::cout << this->mNumerator << std::endl;
	    }
	    else
	    {
	        std::cout << this->mNumerator << "/" << this->mDenominator  << std::endl;
	    }
	}
private:
	int mNumerator;
	int mDenominator;
};

int main()
{
    cout << "Add" << endl;
	Fraction F1, F2, FCalc;

	F1.SetValues(5,15);
	F2.SetValues(6,15);

	Fraction result = FCalc.Add(F1, F2);
	result.Display();

	Fraction F4, F5;

	F4.SetValues(1,4);
	F5.SetValues(3,8);

	Fraction result2 = FCalc.Add(F4,F5);
	result2.Display();

	cout << "GCD test" << endl;
	cout << FCalc.gcd(11, 15) << endl;

	Fraction simplifiedResult =  FCalc.Simplify(128, 256);
	simplifiedResult.Display();

	cout << "Subtract" << endl;

	Fraction S1, S2;

	S1.SetValues(3,4);
	S2.SetValues(1, 4);

	Fraction s1s2result = FCalc.Subtract(S1,S2);

	s1s2result.Display();

	Fraction S3, S4;

	S3.SetValues(1,2);
	S4.SetValues(1,6);

    Fraction s3s4result = FCalc.Subtract(S3, S4);

    Fraction S5, S6;

    S5.SetValues(1,4);
    S6.SetValues(2,5);

    Fraction s5s6result = FCalc.Subtract(S5, S6);

    s5s6result.Display();

    cout << "Multiply" << endl;
    Fraction M1, M2;

    M1.SetValues(1,2);
    M2.SetValues(2,5);

    Fraction m1m2result = FCalc.Multiply(M1,M2);

    m1m2result.Display();

    Fraction M3, M4;

    M3.SetValues(1,3);
    M4.SetValues(9,16);

    Fraction m3m4result = FCalc.Multiply(M3,M4);

    m3m4result.Display();

    cout << "Divide" << endl;

    Fraction D1, D2;

    D1.SetValues(1,2);
    D2.SetValues(1,6);

    Fraction d1d2result = FCalc.Divide(D1,D2);

    d1d2result.Display();

    Fraction D3,D4;

    D3.SetValues(1,8);
    D4.SetValues(1,4);

    Fraction d3d4result = FCalc.Divide(D3,D4);

    d3d4result.Display();
	return 0;
}