#include <stdio.h>
/*
class MathCalc 
{
private:
	const double pi;
public:
	MathCalc(double api) :pi(api) { ; }
	void DoCalc(double r)
	{
		printf("반지름 %.2f인 원의 둘레 = %.8f\n", r, r * 2 * pi);
	}
};

int main()
{
	MathCalc m(3.141592);
	m.DoCalc(5);
}
*/
class MathCalc
{
private:
	const double pi;
public:
	double getPi() { return pi; }
	// void setPi(double p) { pi = p; } // 불가능
	MathCalc(double api) :pi(api) { ; }
	void DoCalc(double r)
	{
		printf("반지름 %.2f인 원의 둘레 = %.8f\n", r, r * 2 * pi);
	}
};

int main()
{
	MathCalc m(3.141592);
	m.DoCalc(5);
}