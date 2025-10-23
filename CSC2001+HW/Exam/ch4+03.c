#include <stdio.h>

const double PI = 3.14159;

double r;

int main(void)
{

    printf("Insert the radius: ");
    scanf("%lf", &r);

    printf("S: %.2lf, l: %.2lf", PI * r * r, 2 * PI * r);
}