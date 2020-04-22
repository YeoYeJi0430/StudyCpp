#include <stdio.h>
// 캡슐화
/*
class Time
{
public:
	int hour, min, sec;
	Time(int h, int m, int s)
	{
		hour = h;
		min = m;
		sec = s;
		// 초기화
	}
	void OutTime()
	{
		printf("현재 시간은 %d:%d:%d입니다\n", hour, min, sec);
	}
};

int main()
{
	Time now(14, 02, 52);
	now.OutTime();
	now.hour = 15; // private을 이용하여 이걸 못하게 하기!
	now.min = 0;
	now.sec = 0;
	now.OutTime();
	return 0;
}
*/
class Time
{
private:
	int hour, min, sec;
public:
	Time(int h, int m, int s)
	{
		SetHour(h);
		SetMinute(m);
		SetSecond(s);
		// 초기화
	}
	int GetHour()
	{
		return hour;
	}
	void SetHour(int h)
	{
		if (h >= 0 && h < 24) 
		{
			hour = h;
		}
		else
		{
			hour = 0;
		}
	}
	int GetMinute()
	{
		return min;
	}
	void SetMinute(int m)
	{
		if (m >= 0 && m < 60)
		{
			min = m;
		}
		else
		{
			min = 0;
		}
	}
	int GetSecond()
	{
		return sec;
	}
	void SetSecond(int s)
	{
		if (s >= 0 && s < 60)
		{
			sec = s;
		}
		else
		{
			sec = 0;
		}
	}
	void OutTime()
	{
		printf("현재 시간은 %d:%d:%d입니다\n", hour, min, sec);
	}
};

int main()
{
	Time now(14, 02, 52);
	now.OutTime();
	//now.hour = 15; 사용x
	//now.min = 0; 
	//now.sec = 0;
	//now.OutTime();
	now.SetHour(40); // 40을 넣었을때 0이 나오도록함. 캡슐화를 이용해 접근은 가능하지만 제한적임
	now.OutTime();

	now.SetHour(10);
	now.SetMinute(20);
	now.SetSecond(14);
	now.OutTime();

	return 0;
}