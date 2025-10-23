#include <stdio.h>

int main(void)
{
    double len, width;

    scanf("%lf %lf", &len, &width);

    double S, l;

    S = len * width;
    l = 2.0 * (len + width);

    printf("S = %.2lf, l = %.2lf \n", S, l);

    return 0;
}