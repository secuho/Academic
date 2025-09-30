#include <stdio.h>

int main()
{

    int num[8], check1, check2;
    for (int n = 0; n < 8; n++)
    {
        scanf("%d", &num[n]);
    }

    check1 = check2 = 0;

    for (int i = 0; i < 8; i++)
    {
        if (num[i] == i + 1)
        {
            check1++;
        }
    }

    for (int j = 0; j < 8; j++)
    {
        if (num[j] == 8 - j)
        {
            check2++;
        }
    }

    while (1)
    {
        if (check1 == 8)
        {
            printf("ascending");
            break;
        }
        else if (check2 == 8)
        {
            printf("descending");
            break;
        }
        else
        {
            printf("mixed");
            break;
        }
    }
}