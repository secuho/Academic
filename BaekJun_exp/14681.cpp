#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int x, y, a, b;

int main () {

    scanf("%d", &x);
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        printf("1");
    }
    else if (x > 0 && y < 0) {
        printf("4");
    }
    else if (x < 0 && y > 0) {
        printf("2");
    }
    else if (x < 0 && y < 0) {
        printf("3");
    }

return 0;
}