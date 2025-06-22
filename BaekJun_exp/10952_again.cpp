#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int a, b;
int i = 1;

int main () {

    while (i == 1) {
        scanf("%d %d", &a, &b);

        if (a==0 && b==0) {
            i = 0;
        } else {
        printf("%d\n", a+b);
        }
    }

    return 0;
}