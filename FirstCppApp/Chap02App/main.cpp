#include <stdio.h>
#include "Time.h"
#include "Date.h"

//78p 3번
int main()
{
	Date d;
	d.SetDate(2020, 04, 20);
	d.OutDate();
	printf("Size of Date =%d\n", sizeof(d)); /*private:
	int year, month, day; Date.h에 선언한 변수 3개가 int라서 사이즈 12*/
	Time now;													//시스템함수

	now.SetTime(15, 54, 40);									// now 입력하고 . 입력시 settime이랑 outtime만 뜨고
																// hour,min,sec는 값을 지정해 줄 수 없음.
	now.OutTime();
	printf("Size of Time =%d\n", sizeof(d)); /*private:
	int hour, min, sec; Time.h에 선언한 변수 3개가 int라서 사이즈 12*/
	return 0;
}