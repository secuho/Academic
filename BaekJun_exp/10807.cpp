#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int N, V, amount=0;

int main () {

    scanf("%d", &N);

    int var[N];

    for (int i=0; i<=N-1; i++) {
        scanf("%d", &var[i]);
    }
    scanf("%d", &V);

    for (int j=0; j<=N-1; j++) {
        if (var[j] == V) {
            amount++;
        }
    }

    printf("%d", amount);

return 0;
}