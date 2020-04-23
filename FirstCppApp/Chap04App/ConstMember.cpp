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
		printf("������ %.2f�� ���� �ѷ� = %.8f\n", r, r * 2 * pi);
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
	// void setPi(double p) { pi = p; } // �Ұ���
	MathCalc(double api) :pi(api) { ; }
	void DoCalc(double r)
	{
		printf("������ %.2f�� ���� �ѷ� = %.8f\n", r, r * 2 * pi);
	}
};

int main()
{
	MathCalc m(3.141592);
	m.DoCalc(5);
}