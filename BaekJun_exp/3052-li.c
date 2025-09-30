#include <stdio.h>

int main()
{

    long long int total = 0;
    int count = 0, data = 0, r;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &data);

        r = data % 42;

        if ((total & (1 << r)) == 0)
        {
            total = total | (1 << r);
            count++;
        }
    }

    printf("%d", count);
}