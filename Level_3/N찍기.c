//1부터 N까지 출력하는 문제

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int N = 0;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		printf("%d\n", i);
	}

	return 0;
}