//0 0이 들어올 때까지 A+B를 출력하는 문제

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int A, B;

	do
	{
		scanf("%d %d", &A, &B);

		if (A + B == 0)
		{
			break;
		}
	
		printf("%d\n", A + B);
	} while (1);

	return 0;
}