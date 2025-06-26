#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

char a[10], b[10];

int num;

int main () {

    while (1) {
        scanf("%d %d", a, b);

        if (a == "") {
            break;
        }
        
        num = int("a+b");

        printf("%d\n", num);
    }

return 0;
}