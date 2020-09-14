#include <stdio.h>

template <typename T>
T max(T a, T b) // 같은타입
{
	retun(a > b) ? a : b;
}

template <typename T>
T cast(int s)
{
	return (T)s;
}

int main()
{
	int a = max(1, 2);
	double b = max(1.1, 2.2);
	double c = max(cast<double>(2), 3.14); // 같은타입으로 선언 했기 때문에 불가능함. 형변환 사용하면 가능 max(double(2), 3.14) 또는 max(2, int(3.14))
	

	printf("c=%f\n", c);
}