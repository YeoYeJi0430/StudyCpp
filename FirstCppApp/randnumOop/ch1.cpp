#include <stdio.h>
#include <stdlib.h>

// �ζ��� �Լ� = ��ũ���Լ��� ��� 52p
int randfunc(int n)
{
	return rand() % n;
}

int main()
{
	int i, j, k;

	i = randfunc(10);
	j = randfunc(100);
	k = randfunc(50);
	printf("���� = %d,%d,%d\n", i, j, k);
}

