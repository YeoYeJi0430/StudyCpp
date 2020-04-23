#include <stdio.h>

class MathCalc
{
private:
	static const double pi;
public:
	MathCalc() { ; }
	void DoCalc(double r)
	{
		printf("반지름 %.2f인 원의 둘레 = %.2f\n", r, r * 2 * pi);
	}
};

const double MathCalc::pi = 3.141592;

int main()
{
	MathCalc m;
	m.DoCalc(5);
}