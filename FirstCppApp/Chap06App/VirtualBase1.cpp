/*
227p
VirtualBase1 문제 발생 아래 코드는 
문제발생 x 
*/

#include <stdio.h>

class A
{
protected:
	int a;
public:
	A(int aa) :a(aa) { ; }
};

class B
{
protected:
	int b;
public:
	B(int bb) :b(bb) { ; }
};

class C : public A
{
protected:
	int c;
public:
	C(int aa, int cc) :A(aa), c(cc) { ; } // 초기화
};
class D :public B, public C 
{
protected:
	int d;
public:
	D(int aa, int ab, int ac, int ad) :B(ab), C(aa, ac)
	{
		d = ad; // 초기화
	}
	void fD()
	{
		b = 1;
		c = 2;
		a = 3; 
		d = 4;
	}
	void Out()
	{
		printf("%d, %d, %d, %d\n", a, b, c, d);
	}
};

int main()
{
	D d(2, 4, 6, 8);
	d.Out();
	d.fD();
	d.Out();
	return 0;
}