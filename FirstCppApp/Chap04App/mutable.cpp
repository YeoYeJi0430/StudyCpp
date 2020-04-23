#include <stdio.h>

class Some
{
private:
	mutable int temp; // 객체의 상수성과 상관없이 언제나 수정이 가능.

public:
	Some() { temp = 1; }
	void method() const { temp = 0; }
	void print() const { printf("%d\n", temp); }
};

int main()
{
	Some s;
	s.method();

	const Some t;
	t.method();
	t.print();
}