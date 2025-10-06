#include <stdio.h>

int main()
{

    int a, b, c, n1, n2, n3;

    while (1)
    {

        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0)
            break;

        if (a >= b && a >= c)
        {
            n3 = a;
            if (b >= c)
            {
                n2 = b;
                n1 = c;
            }
            else
            {
                n2 = c;
                n1 = b;
            }
        }
        else if (b >= a && b >= c)
        {
            n3 = b;
            if (a >= c)
            {
                n2 = a;
                n1 = c;
            }
            else
            {
                n2 = c;
                n1 = a;
            }
        }
        else
        {
            n3 = c;
            if (a >= b)
            {
                n2 = a;
                n1 = b;
            }
            else
            {
                n2 = b;
                n1 = a;
            }
        }

        if (n3 * n3 == n1 * n1 + n2 * n2)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
}