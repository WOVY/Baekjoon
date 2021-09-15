//A+B를 바로 위 문제보다 아름답게 출력하는 문제

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int T;
	int A, B;

	scanf("%d", &T);

	for (int i = 1; i <= T; i++)
	{
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", i, A, B, A + B);
	}

	return 0;
}