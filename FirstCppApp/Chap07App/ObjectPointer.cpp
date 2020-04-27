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
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
};

class Student : public Human // ���
{
protected:
	int stunum;

public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
		stunum = astunum;
	}
	virtual void intro() { // ������, ����� �Ǵ� �Լ��� virtual�� �����������, ���� �ٸ� Ÿ���� ���������� ���� �̸��� �����ε� �Ǵ� �Լ��� ������Ѷ�.
		printf("%d�й� %s�Դϴ�.\n", stunum, name);
	}
	void study() {
		printf("���̴� ��, �̻��� ��, �̻� ��\n");
	}
};

int main()
{
	Human h("����", 25);
	Student s("���л�", 25, 2015);
	Human* pH;
	Student* pS;

	pH = &h;			// �翬�� ���� name, age <= name(����),age(25)
	pH->intro();
	
	pS = &s;			// �翬�� ���� name, age, stunum <= name(���л�), age(25), stunum(2015)
	pS->intro();		// �̸� ���� �й� ��� ���
		
	pH = &s;			// ����       name(���л�), age(25) <= name(���л�), age(25), stunum(2015)
	pH->intro();		//�̸������̸� ������ �־ �ΰ��� ���
	
	// pS = &h;			// ����       name(����), age(25), stunum(????) <= name(����), age(25)

	pS = (Student*)&h; // ������ �й��� �Ȱ����� �־ �й��� ����� ��� �ȵ�.
	pS->intro();
	return 0;
}
/*virtual�θ𿡰� ��ӹ��� class�� �������ؼ� ����Ұ��� ����?intro����Ҷ� Ÿ���� ���� �����Ϸ��� Ȯ�� �� ��� ����?�θ� virtual������ ������ �ڽĿ��Ե� �ش� ��int main()
{
   Human ram("�谡��", 25);
   Student yeo("������", 25, 1534567);

   Human* pH;
   Student* pS;

   pH = &ram;      // name, age <=name(�谡��),age(25)
   pH->intro();

   pS = &yeo;      // name, age, stunum <=name(������),age(25),stunum(1534567)
   pS->intro();

   pH = &yeo;      // name, age, stunum <= name, age, stunum
   pH->intro();

   // pS = &h;      // name,age,stunum(???) <= name(�谡��), age(25)
   pS = (Student*)&ram;
   pS->intro();



   return 0;
}*/