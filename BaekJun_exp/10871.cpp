#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int N, X; 

int main () {

    scanf("%d %d", &N, &X);

    int A[N];

    for (int i=0; i<=N-1; i++) {
        scanf("%d", &A[i]);
            if (A[i] < X) {
                printf("%d ", A[i]);
            }
    }

return 0;
}