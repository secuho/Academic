#include <stdio.h>

int main()
{

    int A, B, r_B, C, general, sum, len = 0, AB;

    scanf("%d %d %d", &A, &B, &C);

    r_B = B;

    general = A + B - C;

    AB = A;

    while (B > 0)
    {
        len++;
        B = B / 10;
    }

    while (len != 0)
    {
        AB = AB * 10;
        len--;
    }

    AB = (AB + r_B) - C;

    printf("%d\n%d", general, AB);
}