#include <stdio.h>
#include <string.h>

class Human {
private:
	char* name;
	int age;

public:
	Human(const char* name, int age) {
		this->name = new char[strlen(name) + 1]; // this에서 -> private의 변수를 사용하기 위함
		strcpy(this->name, name);
		this->age = age;
		printf("%s 객체생성자가호출되었습니다.\n", this->name);
	}

	~Human() {
		printf("%s 객체가 파괴 되었습니다.\n", this->name);
		delete[] this->name;
	} // 파괴자

	void intro() {
		printf("이름 = %s, 나이 = %d \n", this->name, this->age);
	}
};

int main() {
	Human man("명건", 44);
	man.intro();
}