#include <stdio.h>

class Time
{
	friend const Time operator+(const int s, const Time& me);
	friend const Time operator*(const int s, const Time& me);
private:
	int hour, min, sec;
public:
	Time() { ; }
	Time(int h, int m, int s) :hour(h), min(m), sec(s) { ; } // 초기화
	
	void OutTime()
	{
		printf("%d:%d:%d\n", hour, min, sec);
	}

	const Time operator +(const int s) const // 시간에 초를 나타내는 정수를 더 할 수 있음.
	{
		Time t = *this; // 객체 자신을 t에 할당 . 복사

		t.sec += s;

		t.min += t.sec / 60;
		t.sec %= 60; 
		t.hour += t.min / 60;
		t.min %= 60;

		return t;
	}

	const Time operator *(const int s) const
	{
		Time t = *this;
		int tsec = t.hour * 3600 + t.min * 60 + t.sec;

		tsec *= s;

		t.hour = tsec / 3600;
		t.min = (tsec / 60) % 60;
		t.sec = tsec % 60;

		return t;
	}


	const Time operator + (const Time& other)const
	{
		Time t;
		t.sec = sec + other.sec; // 로직에서 새로 선언된 t로 값을 리턴
		t.min = min + other.min;
		t.hour = hour + other.hour;

		t.min += t.sec / 60; // 35+56 = 91
		t.sec %= 60; // 35+56 = 91 / 60 =1(min) 31(sec)
		t.hour += t.min / 60;
		t.min %= 60;

		return t;
	}

	bool operator ==(const Time& other) const
	{
		return (hour == other.hour && min == other.min && sec == other.sec);
	}

	bool operator != (const Time& other)const
	{
		return !(*this == other);
	}

	bool operator > (const Time& other) const
	{
		if (hour > other.hour) return true;
		if (hour < other.hour) return false;
		if (min > other.min) return true;
		if (min < other.min) return false;
		if (sec > other.sec) return true;
		return true;
	}
	bool operator <(const Time& other)const
	{
		return !(*this > other);
	}
	bool operator >=(const Time& other) const
	{
		return (*this == other || *this > other);
	}
	bool operator <=(const Time& other) const
	{
		return !(*this > other);
	}
};

const Time operator+(const int s, const Time& me)
{
	/*
	Time t = me; // 객체 자신을 t에 할당 . 복사

	t.sec += s;

	t.min += t.sec / 60;
	t.sec %= 60;
	t.hour += t.min / 60;
	t.min %= 60;

	return t;
	*/

	return (me + s); // 내부로직 간략화
}

const Time operator*(const int s, const Time& me)
{
	Time t = me; // 객체 자신을 t에 할당 . 복사

	t.sec += s;

	t.min += t.sec / 60;
	t.sec %= 60;
	t.hour += t.min / 60;
	t.min %= 60;

	return (me * s);
}


int main()
{
	Time t1(1, 40, 32), t2(2, 21, 33); // 4:2:5
	Time t3;
	t1.OutTime();
	t2.OutTime();
	
	t3 = t1 + t2; // +(t1,t2);
	t3.OutTime();

	Time now;
	now = t3 + 360; // now = 360 + t3 <- error
					// const Time operator+(const int s, const Time& me) 추가 후 error(x)
	now.OutTime();

	now = 360 + now;
	now.OutTime();

	printf("곱셈\n");
	Time cur(1, 20, 12);
	Time mul;
	mul = cur * 2;

	mul.OutTime();
}