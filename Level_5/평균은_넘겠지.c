//과연 그럴까요?

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int C, N;
	int* arr;
	double* avg;
	int sum = 0;

	scanf_s("%d", &C);

	for (int i = 0; i < C; i++)
	{
		scanf_s("%d", &N);

		arr = malloc(sizeof(int) * N);
		
		for (int j = 0; j < N; j++)
		{
			scanf("%d", &arr[j]);

			sum += arr[j];

			for (int j = 0; j < N; j++)
			{
				avg = malloc(sizeof(double));

				avg[j] = sum / N;

				printf("%lf", avg[j]);

				free(avg);
			}
		}
		free(arr);
	}
}