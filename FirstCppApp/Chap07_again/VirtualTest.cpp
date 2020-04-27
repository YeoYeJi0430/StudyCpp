/*Human intro ����� ���� ����, Student intro ����� �й� ����
�̸� ���� �Լ��� �ٸ� ���� ��
Human�� �й�����Student�� Human�� ��� ����� �����Ͽ� ��밡��
�θ�->�ڽ� ����
�ڽ�->�θ� �Ұ���
����ȯ �ؾ��ϴµ� ��Ģ������ �� �����������*/

#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std; // cout,cin ���

class Human
{
protected:
	char name[12]; // �̸�
	int age; // ����
public:
	Human(const char* aname, int aage) // ������
	{
		strcpy(name, aname);
		age = aage;
	}
	 virtual void intro() { printf("%s��(��) %d�� �Դϴ�.\n", name, age); }
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
	void intro() { printf("%d��, %s�Դϴ�\n", stunum, name); } // �������̵� : ����� �����鼭 �Ȱ��� �Լ����� ���°� (������) - �����ε�(?) (�ߺ�)
}; 

int main()
{
	Human y("������", 25);
	Student j("����", 15, 2015);

	Human* pY;
	Student* pJ;

	/*
	printf("Human size : %d, Student size :%d\n", sizeof(y), sizeof(j));
	pY = &y;
	pY->intro();
	pJ = &j;
	pJ->intro();

	pY = &j; // �θ�class�� �ڽ�class
	pY->intro();
	pJ = (Student *)&y; // ����ȯ
	pJ->intro();
	*/
	while (1)
	{
		int sel = 0;
		cout << "���ϴ� ���� ������(1:Human, 2:Student, 9:����)";
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
			cout << "�´� ���� �����ϴ�." << endl;
		}

		pY->intro();

	}
	
}