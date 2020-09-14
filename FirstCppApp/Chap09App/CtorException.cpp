#include <stdio.h>

class Int100
{
private:
	int num;
public:
	Int100(int a) try : num(a)
	{ 
		if (a <= 100)
		{
			num = a;
		}
		else
		{
			throw a;
		}
	}
	catch (int a)
	{
		printf("%d는 100보다 큰 정수이므로 다룰 수 없습니다.\n", a);
	}
	Int100& operator+=(int b)
	{
		if (num + b <= 100)
		{
			num += b;
		}
		else
		{
			throw num + b;
		}
		return *this;
	}
	void OutValue()
	{
		printf("%d\n", num);
	}
};

int main()
{
	try
	{
		Int100 i(1003); // 수 변경
		i += 12;
		i.OutValue();
	}
	catch (int n)
	{
		printf("무효한객체"); // 예외처리
	}
	return 0;
}