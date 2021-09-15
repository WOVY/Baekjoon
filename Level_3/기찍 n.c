//제문 는하력출 지까N 터부1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int N;
	int cnt = 0;
	scanf_s("%d", &N);

	for (int i = 0; i < N; i++)
	{
		printf("%d\n", N - i);
	}

	return 0;
}