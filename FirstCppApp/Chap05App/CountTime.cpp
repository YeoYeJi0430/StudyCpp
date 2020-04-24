#include <iostream>
using namespace std;
/* cin,cout
int main()
{
	printf("Hello World\n"); // c ǥ��

	cout << "Hello World" << endl; // c++ ǥ��

	int age;
	cout << "���̸� �Է��ϼ��� : ";
	cin >> age;
	cout << "����� ���̴�" << age << "�Դϴ�." << endl;
}
*/
/* 1
class Time
{
private:
	int hour, min, sec;

public:
	Time() { }
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
	void OutTime() {
		printf("%d:%d:%d\n", hour, min, sec);
	}
};

int main()
{
	Time now(10, 20, 15); // �����Ҵ�
	Time* pLunchTime = new Time(11, 30, 0); // �����Ҵ�
	// cout << "���� �ð��� " << now << "�Դϴ�."<<endl; //�����Ҵ��̶� �ȵ� out����� ������ �ؾߵ�
	cout << "���� �ð��� " << pLunchTime << "�Դϴ�." << endl; // �ּҰ� ����.
	delete pLunchTime;
}
*/
class Time
{
	friend ostream& operator << (ostream& c, const Time& T);
	friend ostream& operator << (ostream& c, const Time* pT);
private:
	int hour, min, sec;

public:
	Time() { }
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
	void OutTime() {
		printf("%d:%d:%d\n", hour, min, sec);
	}
};

ostream& operator << (ostream& c, const Time& T)
{
	c << T.hour << ":" << T.min << ":" << T.sec;
	return c;
}

ostream& operator << (ostream& c, const Time* pT)
{
	c << *pT;
	// c << pT->hour << ":" << pT->min << ":" << pT->sec;
	// << ������ �Լ� ���� ���� ��� ����(?)
	return c;
}

int main()
{
	Time now(10, 22, 5);
	Time* pLunchTime;

	pLunchTime = new Time(12, 30, 0);
	cout << "���� �ð��� " << now << "�Դϴ�." << endl;
	cout << "���� �ð��� " << pLunchTime << "�Դϴ�." << endl;
	delete pLunchTime;
 }
