#include <stdio.h>

/*68p
//Ŭ���� ����
class Human
{
public :
	char name[12];
	int age;

	void intro()
	{
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
}; 

int main()
{
	Human Y = { "������",25 };
	Y.intro();

	return 0;
}
*/

/*70p
class Human
{
public:
	char name[12];
	int age;

	void intro()
	{
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
};

int main()
{
	Human arFriend[10] = {
		{"������",49},
	{"������", 45},
	{"�ڻ�", 30
}
	};

	for (int i = 0; i < 5; i++)
	{
		Human* pFriend;
		pFriend = &arFriend[i];
		pFriend->intro();

	}

	return 0;
}
*/