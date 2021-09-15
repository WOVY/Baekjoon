//최솟값과 최댓값을 찾는 문제

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int N, i, num;
	int MIN = 1000000, MAX = -1000000;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &num);

		if (MIN > num)
			MIN = num;

		if (MAX < num)
			MAX = num;
	}

	printf("%d %d", MIN, MAX);
}