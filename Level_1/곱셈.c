#include <stdio.h>

int main()
{
	int A = 0, B = 0;

	scanf_s("%d", &A);
	getchar();
	scanf_s("%d", &B);

	int ans = A * B;

	while (B != 0)
	{
		printf("%d\n", A * (B % 10));
		B /= 10;
	}

	printf("%d", ans);

	return 0;
}