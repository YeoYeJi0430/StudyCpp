#include <iostream>
using namespace std;
/* cin,cout
int main()
{
	printf("Hello World\n"); // c 표준

	cout << "Hello World" << endl; // c++ 표준

	int age;
	cout << "나이를 입력하세요 : ";
	cin >> age;
	cout << "당신의 나이는" << age << "입니다." << endl;
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
	Time now(10, 20, 15); // 정적할당
	Time* pLunchTime = new Time(11, 30, 0); // 동적할당
	// cout << "현재 시간은 " << now << "입니다."<<endl; //정적할당이라서 안됨 out출력을 재정의 해야됨
	cout << "점심 시간은 " << pLunchTime << "입니다." << endl; // 주소값 나옴.
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
	// << 연산자 함수 정의 없이 출력 가능(?)
	return c;
}

int main()
{
	Time now(10, 22, 5);
	Time* pLunchTime;

	pLunchTime = new Time(12, 30, 0);
	cout << "현재 시간은 " << now << "입니다." << endl;
	cout << "현재 시간은 " << pLunchTime << "입니다." << endl;
	delete pLunchTime;
 }
