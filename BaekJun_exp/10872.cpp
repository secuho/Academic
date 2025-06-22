#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int N, total=1;

int main () {

    scanf("%d", &N);

    for (int i=1; i<=N; i++) {
        total = total * i;
    }

    printf("%d", total);

return 0;
}