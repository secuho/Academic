#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int a, b, c, d, e, test=0;

int main () {

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    test = a*a + b*b + c*c + d*d + e*e;

    test = test % 10;

    printf("%d", test);

return 0;
}