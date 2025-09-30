#include <stdio.h>

int main()
{

    int num[10], rem = 0, r[42], count = 0;

    for (int fir_r = 0; fir_r <= 41; fir_r++)
    {
        r[fir_r] = 0;
    }

    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &num[i]);
        rem = num[i] % 42;
        r[rem] = 1;
    }

    for (int j = 0; j <= 41; j++)
    {
        if (r[j] == 1)
            count++;
    }

    printf("%d", count);
}