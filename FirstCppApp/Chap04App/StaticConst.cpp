#include <stdio.h>

class MathCalc
{
private:
	static const double pi;
public:
	MathCalc() { ; }
	void DoCalc(double r)
	{
		printf("������ %.2f�� ���� �ѷ� = %.2f\n", r, r * 2 * pi);
	}
};

const double MathCalc::pi = 3.141592;

int main()
{
	MathCalc m;
	m.DoCalc(5);
}