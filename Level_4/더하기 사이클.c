//원래 수로 돌아올 때까지 연산을 반복하는 문제

#include <stdio.h>

int main()
{
    int N, sum, num, a, b, cnt = 0;

    scanf_s("%d", &N);

    if (10 < N < 100)
    {
        do
        {
            if (cnt == 0)
            {
                a = N / 10;
                b = N % 10;
            }

            if (cnt > 0)
            {
                a = num / 10;
                b = num % 10;
            }

            sum = a + b;
            num = (10 * b) + (sum % 10);

            cnt++;

        } while (num != N);
    }

    else if (0 < N < 10)
    {
        sum = 0 + N;

        do
        {
            num = (10 * N) + sum;

            a = num / 10;
            b = num % 10;

            sum = a + b;

            num = (10 * b) + (sum % 10);

            cnt++;

        } while (num != N);
    }

    printf("%d", cnt);

    return 0;
}