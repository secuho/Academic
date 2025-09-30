#include <stdio.h>

int main()
{

    int N;

    scanf("%d", &N);

    int num[N], min, max;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }

    min = 1000000;
    max = -1000000;

    for (int j = 0; j < N; j++)
    {
        if (num[j] < min)
        {
            min = num[j];
        }
        if (num[j] > max)
        {
            max = num[j];
        }
    }

    printf("%d %d", min, max);
}