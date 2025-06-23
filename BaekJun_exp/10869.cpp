#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int a, b;

int main () {

    scanf("%d %d", &a, &b);

    printf("%d\n", a+b);
    printf("%d\n", a-b);
    printf("%d\n", a*b);
    printf("%d\n", a/b);
    printf("%d\n", a%b);

return 0;
}