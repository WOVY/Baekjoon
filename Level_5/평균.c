//평균을 조작하는 문제

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);

	double score[1000];
	double MAX = 0;
	double sum = 0;

	for (int i = 0; i < N; i++)
	{
		scanf("%lf", &score[i]);
		
		if (MAX < score[i])
		{
			MAX = score[i];
		}
	}

	for (int i = 0; i < N; i++)
	{
		sum += score[i] / MAX * 100;
	}

	printf("%.2lf", sum / (double)N);
}