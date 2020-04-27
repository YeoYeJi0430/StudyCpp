#include <stdio.h>
#include <string.h>

class Human
{
protected:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}
	 void intro() {
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

class Student : public Human // 상속
{
protected:
	int stunum;

public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
		stunum = astunum;
	}
	virtual void intro() { // 재정의, 기반이 되는 함수에 virtual로 선언했을경우, 나와 다른 타입이 들어왔을때는 나의 이름과 오버로딩 되는 함수를 실행시켜라.
		printf("%d학번 %s입니다.\n", stunum, name);
	}
	void study() {
		printf("이이는 사, 이삼은 육, 이사 팔\n");
	}
};

int main()
{
	Human h("예지", 25);
	Student s("이학생", 25, 2015);
	Human* pH;
	Student* pS;

	pH = &h;			// 당연히 가능 name, age <= name(예지),age(25)
	pH->intro();
	
	pS = &s;			// 당연히 가능 name, age, stunum <= name(이학생), age(25), stunum(2015)
	pS->intro();		// 이름 나이 학번 모두 출력
		
	pH = &s;			// 가능       name(이학생), age(25) <= name(이학생), age(25), stunum(2015)
	pH->intro();		//이름과나이만 가지고 있어서 두개만 출력
	
	// pS = &h;			// 에러       name(예지), age(25), stunum(????) <= name(예지), age(25)

	pS = (Student*)&h; // 예지는 학번을 안가지고 있어서 학번은 제대로 출력 안됨.
	pS->intro();
	return 0;
}
/*virtual부모에게 상속받은 class를 재정의해서 사용할것을 지정?intro사용할때 타입을 보고 컴파일러가 확인 후 결과 내줌?부모가 virtual가지고 있으면 자식에게도 해당 됨int main()
{
   Human ram("김가람", 25);
   Student yeo("여예지", 25, 1534567);

   Human* pH;
   Student* pS;

   pH = &ram;      // name, age <=name(김가람),age(25)
   pH->intro();

   pS = &yeo;      // name, age, stunum <=name(여예지),age(25),stunum(1534567)
   pS->intro();

   pH = &yeo;      // name, age, stunum <= name, age, stunum
   pH->intro();

   // pS = &h;      // name,age,stunum(???) <= name(김가람), age(25)
   pS = (Student*)&ram;
   pS->intro();



   return 0;
}*/