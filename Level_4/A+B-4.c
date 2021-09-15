//입력이 끝날 때까지 A+B를 출력하는 문제. EOF에 대해 알아보세요.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int A, B;

	while (scanf("%d %d", &A, &B) != EOF)
	{
		printf("%d\n", A + B);
	}
	
	return 0;
}