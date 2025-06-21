#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int cross;

int main () {

    scanf("%d", &cross);

    for (int i=1; i<10; i++) {
        printf("%d * %d = %d\n", cross, i, cross*i);
    }

return 0;
}