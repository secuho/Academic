#include <stdio.h>

int main()
{

    int N, temp, count = 0;

    scanf("%d", &N);

    int num[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int j = 0; j < N; j++)
    {
        temp = 0;

        for (int k = 1; k <= 1000; k++)
        {
            if (num[j] % k == 0)
                temp++;
        }

        if (temp == 2)
            count++;
    }

    printf("%d", count);
}