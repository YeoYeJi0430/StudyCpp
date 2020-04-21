#include <stdio.h>

/*68p
//클래스 선언
class Human
{
public :
	char name[12];
	int age;

	void intro()
	{
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
}; 

int main()
{
	Human Y = { "여예지",25 };
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
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

int main()
{
	Human arFriend[10] = {
		{"문동욱",49},
	{"김유진", 45},
	{"박상막", 30
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