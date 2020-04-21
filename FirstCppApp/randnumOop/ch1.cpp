#include <stdio.h>
#include <stdlib.h>

// 인라인 함수 = 매크로함수랑 비슷 52p
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
	printf("난수 = %d,%d,%d\n", i, j, k);
}

