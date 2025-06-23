#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 

float a, b;
double value;

int main () {

    scanf("%f %f", &a, &b);

    value = double(a / b);

    printf("%.13lf", value);

return 0;
}