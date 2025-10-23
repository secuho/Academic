#include <stdio.h>

#define PI 3.14

#define circle(r) (PI * r * r)

int main(void)
{
    printf("%f\n", circle(5));
}