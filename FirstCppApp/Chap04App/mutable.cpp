#include <stdio.h>

class Some
{
private:
	mutable int temp; // ��ü�� ������� ������� ������ ������ ����.

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