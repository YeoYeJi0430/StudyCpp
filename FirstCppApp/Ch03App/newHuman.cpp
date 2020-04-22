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
		printf("== <%s> ��ü ���� ==\n", name);
	} // Human���� �����Ϸ��� �������ִ� �����ڸ� ����Ʈ�����ڶ���

	~Human() {
		printf("== <%s> ��ü�� �ı� ==\n", name);
		delete[] name;
	}

	void intro() {
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
};

int main()
{
	Human boy("����ѹ��ź��̿͵η��", 12); // ���� �Ҵ� . ���� ǥ��
	boy.intro();

	Human* leo; // �����Ҵ�:�����ͻ��
	leo = new Human("���������� ��ī������", 40); // ���� �Ҵ� -> �� ǥ��
	leo->intro();
	delete leo;
}
