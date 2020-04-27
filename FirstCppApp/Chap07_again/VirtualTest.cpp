/*Human intro 실행시 나이 나옴, Student intro 실행시 학번 나옴
이름 같은 함수가 다른 일을 함
Human은 학번없음Student는 Human의 모든 기능을 포함하여 사용가능
부모->자식 가능
자식->부모 불가능
형변환 해야하는데 규칙적으로 언어가 허용하지않음*/

#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std; // cout,cin 사용

class Human
{
protected:
	char name[12]; // 이름
	int age; // 나이
public:
	Human(const char* aname, int aage) // 생성자
	{
		strcpy(name, aname);
		age = aage;
	}
	 virtual void intro() { printf("%s은(는) %d살 입니다.\n", name, age); }
};
class Student : public Human
{
protected:
	int stunum;
public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage)
	{
		stunum = astunum;
	}
	void intro() { printf("%d번, %s입니다\n", stunum, name); } // 오버라이딩 : 상속을 받으면서 똑같은 함수명을 쓰는것 (재정의) - 오버로딩(?) (중복)
}; 

int main()
{
	Human y("여예지", 25);
	Student j("예디", 15, 2015);

	Human* pY;
	Student* pJ;

	/*
	printf("Human size : %d, Student size :%d\n", sizeof(y), sizeof(j));
	pY = &y;
	pY->intro();
	pJ = &j;
	pJ->intro();

	pY = &j; // 부모class에 자식class
	pY->intro();
	pJ = (Student *)&y; // 형변환
	pJ->intro();
	*/
	while (1)
	{
		int sel = 0;
		cout << "원하는 수를 고르세요(1:Human, 2:Student, 9:종료)";
		cin >> sel;

		if (sel == 1)
		{
			pY = &y;
		}
		else if (sel == 2)
		{
			pY = &j;
		}
		else if (sel == 9)
		{
			exit(-1);
		}
		else
		{
			cout << "맞는 수가 없습니다." << endl;
		}

		pY->intro();

	}
	
}