#include <stdio.h>

int main()
{
	int num;
	int sum = 0;
	int mod[42] = { 0, };

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &num);

		mod[num % 42]++;
	}

	for (int i = 0; i < 42; i++)
	{
		if (mod[i] > 0)
			sum++;
	}

	printf("%d", sum);
}