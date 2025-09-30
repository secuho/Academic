#include <stdio.h>

int main()
{
    int num[9], max, index = 1;

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &num[i]);
    }

    max = num[0];

    int j = 1;
    while (1)
    {
        if (num[j] > max)
        {
            max = num[j];
            index = j + 1;
        }
        j++;
        if (j == 9)
            break;
    }

    printf("%d\n%d", max, index);
}