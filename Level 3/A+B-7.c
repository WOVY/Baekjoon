//A+B를 조금 더 아름답게 출력하는 문제

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
		printf("Case #%d: %d\n", i, A + B);
	}

	return 0;
}