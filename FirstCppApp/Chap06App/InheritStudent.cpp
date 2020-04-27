#include <stdio.h>
#include <string.h>
/*
class Human
{
private:
	char name[12];
	int age;
public:
	Human(const char* aname, int aage)
	{
		strcpy(name, aname);
		age = aage; 
	} // 초기화

	void intro()
	{
		printf("이름 : %s, 나이 : %d\n", name, age);
	}
};

class Student : public Human // 상속
{
private:
	int stunum;
public:
	Student(const char* aname, int aage, int astunum) :Human(aname, aage) // 생성자
	{
		stunum = astunum; // stunum이 const아니라서 가능. const면 ^Human 옆에 쓰기
	}
	void study()
	{
		printf("이이는 사, 이삼은 육, 이사 팔\n");
	}
};

int main()
{
	Human yeo("예디", 25);
	yeo.intro(); // 부모class

	Student ye("ㅇㅇ",14 , 15);
	ye.intro(); // 자식class, 부모의 intro를 상속받아서 사용가능
	ye.study(); // 자식class
}
*/

/*
class Human
{
protected: // 자식class에서는 사용가능 strcpy에서 사용, main에서는 사용불가
	char name[12];
	int age;
public:
	Human(){ ; }
	Human(const char* aname, int aage)
	{
		strcpy(name, aname);
		age = aage;
	} // 초기화

	void intro()
	{
		printf("이름 : %s, 나이 : %d\n", name, age);
	}
};

class Student : public Human // 상속
{
private:
	int stunum;
public:
	Student(const char* aname, int aage, int astunum)// 생성자
	{
		strcpy(name, aname);
		age = aage;
		stunum = astunum;
	}
	void study()
	{
		printf("이이는 사, 이삼은 육, 이사 팔\n");
	}
};

int main()
{
	Human yeo("예디", 25);
	yeo.intro();

	Student ye("ㅇㅇ", 14, 15);
	ye.intro(); // 자식class, 부모의 intro를 상속받아서 사용가능
	ye.study(); // 자식class
}
*/
class Human
{
protected: // 자식class에서는 사용가능 strcpy에서 사용, main에서는 사용불가
	char name[12];
	int age;
public:
	Human(const char* aname, int aage)
	{
		strcpy(name, aname);
		age = aage;
	} // 초기화

	void intro()
	{
		printf("이름 : %s, 나이 : %d\n", name, age);
	}
};

class Student : public Human // 상속, Human앞에 private 하면 main에서 intro 사용불가
{
private:
	int stunum;
public:
	Student(const char* aname, int aage, int astunum) :Human(aname, aage)// 생성자
	{
		stunum = astunum;
	}
	void study()
	{
		printf("이이는 사, 이삼은 육, 이사 팔\n");
	}
	void report()
	{
		printf("이름 : %s, 학번 : %d 보고서 제출\n", name, stunum);
	}
};

int main()
{
	Human yeo("예디", 25);
	yeo.intro();

	Student ye("ㅇㅇ", 14, 15);
	ye.intro(); // 자식class, 부모의 intro를 상속받아서 사용가능
	ye.study(); // 자식class
	Student ji("ㅇㅈ", 11, 15);
	ji.report();
}