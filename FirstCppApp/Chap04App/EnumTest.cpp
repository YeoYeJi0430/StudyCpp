#include <stdio.h>

enum Color
{
	Black,
	White,
	Red,
	Green,
	Blue,
	Aqua
}; // 그룹화 나열

class Test
{
private:
	Color mycol;
public:
	Test()
	{
		mycol = Color::Aqua;
	}
	void OutColor()
	{
		printf("%d\n", mycol);
	}
};

int main()
{
	Test t;
	t.OutColor();

}