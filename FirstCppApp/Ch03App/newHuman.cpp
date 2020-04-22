#include <stdio.h>
#include <string.h>
/*89p*/
class Human
{
private:
	char* name;
	int age;

public:
	Human(const char* aname, int aage) {
		name = new char[strlen(aname) + 1];
		strcpy(name, aname);
		age = aage;
		printf("== <%s> 객체 생성 ==\n", name);
	} // Human같은 컴파일러가 제공해주는 생성자를 디폴트생성자라함

	~Human() {
		printf("== <%s> 객체가 파괴 ==\n", name);
		delete[] name;
	}

	void intro() {
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

int main()
{
	Human boy("김수한무거북이와두루미", 12); // 정적 할당 . 으로 표시
	boy.intro();

	Human* leo; // 동적할당:포인터사용
	leo = new Human("레오나르도 디카프리오", 40); // 동적 할당 -> 로 표시
	leo->intro();
	delete leo;
}
