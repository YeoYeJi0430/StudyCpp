#include <stdio.h>
#include <exception>
using namespace std;

void myunex()
{
	puts("�ٽ� ���� �߻�");
	exit(-2); // 0 �̾ƴϸ� ��� ����
}

void calc() throw (int) // ������ �������� �����ڴ���.
{
	// ���ó�� �߸� �Ǹ� ���ڿ��� ���� <-���� �����ѰŶ� Ÿ�� �ٸ�
	// set_terminate(myunex);
	// throw "string";
	// ������ �Ʒ��� ���� ������ �����.
	throw 56;
}

int main()
{
	set_terminate(myunex);
	try
	{
		calc();
	}
	catch (int)
	{
		puts("������ ���� �߻�");
	}
	puts("���α׷� ����");
	return 0;
}