//1부터 N까지의 합을 구하는 문제. 물론 반복문 없이 풀수도 있다.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int n = 0, sum = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}

	printf("%d", sum);

	return 0;
}