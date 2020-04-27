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
	} // �ʱ�ȭ

	void intro()
	{
		printf("�̸� : %s, ���� : %d\n", name, age);
	}
};

class Student : public Human // ���
{
private:
	int stunum;
public:
	Student(const char* aname, int aage, int astunum) :Human(aname, aage) // ������
	{
		stunum = astunum; // stunum�� const�ƴ϶� ����. const�� ^Human ���� ����
	}
	void study()
	{
		printf("���̴� ��, �̻��� ��, �̻� ��\n");
	}
};

int main()
{
	Human yeo("����", 25);
	yeo.intro(); // �θ�class

	Student ye("����",14 , 15);
	ye.intro(); // �ڽ�class, �θ��� intro�� ��ӹ޾Ƽ� ��밡��
	ye.study(); // �ڽ�class
}
*/

/*
class Human
{
protected: // �ڽ�class������ ��밡�� strcpy���� ���, main������ ���Ұ�
	char name[12];
	int age;
public:
	Human(){ ; }
	Human(const char* aname, int aage)
	{
		strcpy(name, aname);
		age = aage;
	} // �ʱ�ȭ

	void intro()
	{
		printf("�̸� : %s, ���� : %d\n", name, age);
	}
};

class Student : public Human // ���
{
private:
	int stunum;
public:
	Student(const char* aname, int aage, int astunum)// ������
	{
		strcpy(name, aname);
		age = aage;
		stunum = astunum;
	}
	void study()
	{
		printf("���̴� ��, �̻��� ��, �̻� ��\n");
	}
};

int main()
{
	Human yeo("����", 25);
	yeo.intro();

	Student ye("����", 14, 15);
	ye.intro(); // �ڽ�class, �θ��� intro�� ��ӹ޾Ƽ� ��밡��
	ye.study(); // �ڽ�class
}
*/
class Human
{
protected: // �ڽ�class������ ��밡�� strcpy���� ���, main������ ���Ұ�
	char name[12];
	int age;
public:
	Human(const char* aname, int aage)
	{
		strcpy(name, aname);
		age = aage;
	} // �ʱ�ȭ

	void intro()
	{
		printf("�̸� : %s, ���� : %d\n", name, age);
	}
};

class Student : public Human // ���, Human�տ� private �ϸ� main���� intro ���Ұ�
{
private:
	int stunum;
public:
	Student(const char* aname, int aage, int astunum) :Human(aname, aage)// ������
	{
		stunum = astunum;
	}
	void study()
	{
		printf("���̴� ��, �̻��� ��, �̻� ��\n");
	}
	void report()
	{
		printf("�̸� : %s, �й� : %d ���� ����\n", name, stunum);
	}
};

int main()
{
	Human yeo("����", 25);
	yeo.intro();

	Student ye("����", 14, 15);
	ye.intro(); // �ڽ�class, �θ��� intro�� ��ӹ޾Ƽ� ��밡��
	ye.study(); // �ڽ�class
	Student ji("����", 11, 15);
	ji.report();
}