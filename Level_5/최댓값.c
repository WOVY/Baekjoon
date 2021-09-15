//최댓값이 어디에 있는지 찾는 문제

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int num, index;
	int MIN = 100, MAX = 1;
	int arr[9];

	for (int i = 0; i < 9; i++)
	{
		scanf_s("%d", &num);
		arr[i] = num;

		if (MAX < arr[i])
		{
			MAX = arr[i];
			index = i + 1;
		}
	}

	printf("%d\n%d", MAX, index);


}