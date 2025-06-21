#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int a, b;

int main () {

    scanf("%d %d", &a, &b);

    if (a>b) {
        printf(">");
    } else if (a<b) {
        printf("<");
    } else if (a==b) {
        printf("==");
    }

return 0;
}