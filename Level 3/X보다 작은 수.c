//for과 if를 같이 쓰는 문제

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int N, X, n;

	scanf("%d %d", &N, &X);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &n);

		if (n < X)
		{
			printf("%d ", n);
		}
	}

	return 0;
}