#include <stdio.h>
/*
void swap(int& a, int& b)
{
	int t;
	t = a;
	a = b;
	b = t;
}

void swap(double& a, double& b)
{
	double t;
	t = a;
	a = b;
	b = t;
}

int main()
{
	int a = 3, b = 4;
	double c = 1.2, d = 3.4;
	swap(a, b);
	swap(c, d);
	printf("a=%d,b=%d\n", a, b);
	printf("c=%f,d=%f\n", c, d);
}
*/

/*
template <typename T>
void swap(T& a, T& b)
{
	T t;
	t = a;
	a = b;
	b = t;
}

int main()
{
	int a = 3, b = 4;
	double c = 1.2, d = 3.4;
	char e = 'e', f = 'f';

	swap(a, b);
	swap(c, d);
	swap(e, f);
	printf("a=%d,b=%d\n", a, b);
	printf("c=%f,d=%f\n", c, d);
	printf("e=%c,f=%c\n", e, f);
}
*/
/*
template <typename T>
void swap(T& a, T& b)
{
	T t;
	t = a;
	a = b;
	b = t;
}

template <typename T>
T Add(T& a, T& b)
{
	return a + b;
}

int main()
{
	int a = 3, b = 4;
	double c = 1.2, d = 3.4;
	char e = 'e', f = 'f';

	swap(a, b);
	swap(c, d);
	swap(e, f);

	printf("a=%d,b=%d\n", a, b);
	printf("c=%f,d=%f\n", c, d);
	printf("e=%c,f=%c\n", e, f);
	printf("a+b=%d\n", Add(a, b));
	printf("c+d=%f\n", Add(c, d));
	printf("e+f=%c\n", Add(e, f));

}
*/

class Util
{
	template <typename T>
	void Swap(T& a, T& b)
	{
		T t;
		t = a;
		a = b;
		b = t;
	}
};



int main()
{
	int a = 3, b = 4;
	double c = 1.2, d = 3.4;
	char e = 'e', f = 'f';

	swap(a, b);
	swap(c, d);
	swap(e, f);

	printf("a=%d,b=%d\n", a, b);
	printf("c=%f,d=%f\n", c, d);
	printf("e=%c,f=%c\n", e, f);
	printf("a+b=%d\n", Add(a, b));
	printf("c+d=%f\n", Add(c, d));
	printf("e+f=%c\n", Add(e, f));

}