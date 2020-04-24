#include <stdio.h>

class Time
{
	friend /*const*/ Time operator +(const Time& me, const Time& other);
private:
	int hour, min, sec;
public:
	Time() { ; }
	Time(int h, int m, int s) :hour(h), min(m), sec(s) { ; } // �ʱ�ȭ
	void OutTime()
	{
		printf("%d:%d:%d\n", hour, min, sec);
	}
	Time SetTime(int h, int m, int s)
	{
		hour = m;
		min = m;
		sec = s;
		return *this;
	}
	
};
/*const*/ Time operator +(const Time& me, const Time& other) 
{
	Time t;
	t.sec = me.sec + other.sec; // �������� ���� ����� t�� ���� ����
	t.min = me.min + other.min;
	t.hour = me.hour + other.hour;

	t.min += t.sec / 60; // 35+56 = 91
	t.sec %= 60; // 35+56 = 91 / 60 =1(min) 31(sec)
	t.hour += t.min / 60;
	t.min %= 60;

	return t;
}

int main()
{
	Time t1(1, 2, 3), t2(2, 4, 5);
	Time t3;
	t1.OutTime();
	t2.OutTime();
	t3 = (t1 + t2).SetTime(6,6,6); // +(t1,t2);
	/*Time operator +(const Time& me, const Time& other) 
	���� const�� ���� ���ϰ��� ������ �� �ְ� ��.
	t3 = (t1 + t2).SetTime(6,6,6) t3=(t1+t2)���� .�� ����
	OutTime()SetTime()�� ����� �� �ְ� ��.*/
	t3.OutTime();
}