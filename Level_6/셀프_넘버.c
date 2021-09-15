#include <stdio.h>

int self_number();

int main()
{

}

int self_number()
{
	int n;
	int count = 0;
	scanf("%d", &n);
	
	int* arr = malloc(sizeof(int) * n % 10);

	while (n != 0)
	{
		n /= 10;
		++count;
	}

	for (int i = 0; i < count; i++)
	{
		
	}
}