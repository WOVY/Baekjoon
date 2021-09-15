//과연 그럴까요?

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int testcase, N, num;
	int sum = 0;

	float avg = 0;
	float high;
	float perc[1000] = { 0, };

	scanf("%d", &testcase);


	for (int i = 0; i < testcase; i++)
	{
		scanf("%d", &N);

		sum = 0;
		high = 0;
		int* score = malloc(sizeof(int) * N);

		for (int j = 0; j < N; j++)
		{
			scanf("%d", &num);
			score[j] = num;
			sum += score[j];
		}

		avg = sum / N;

		for (int k = 0; k < N; k++)
		{
			if (score[k] > avg)
				high++;
		}
		perc[i] = high / N * 100;

		printf("%.3f%%\n", perc[i]);

		free(score);
	}

	return 0;
}