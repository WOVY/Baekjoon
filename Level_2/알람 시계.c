#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int H, M;

	scanf("%d %d", &H, &M);

	if (M >= 45)
	{
		printf("%d %d", H, M - 45);
	}

	else if (M < 45)
	{
		if (H == 0)
		{
			H = 23;
			printf("%d %d", H, M + 60 - 45);
		}

		else
		{
			printf("%d %d", H - 1, M + 60 - 45);
		}
	}

	return 0;
}