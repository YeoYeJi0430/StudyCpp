#include <stdio.h>
#include "Time.h"
#include "Date.h"

//78p 3��
int main()
{
	Date d;
	d.SetDate(2020, 04, 20);
	d.OutDate();
	printf("Size of Date =%d\n", sizeof(d)); /*private:
	int year, month, day; Date.h�� ������ ���� 3���� int�� ������ 12*/
	Time now;													//�ý����Լ�

	now.SetTime(15, 54, 40);									// now �Է��ϰ� . �Է½� settime�̶� outtime�� �߰�
																// hour,min,sec�� ���� ������ �� �� ����.
	now.OutTime();
	printf("Size of Time =%d\n", sizeof(d)); /*private:
	int hour, min, sec; Time.h�� ������ ���� 3���� int�� ������ 12*/
	return 0;
}