#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int N, guess, total, max;

int main () {

    scanf("%d %d", &N, &guess);

    total = N * 21;

        if (N-2>0) { //주사위 하나당 21
            max = total - 1*N - 2*N - 5*(N-2);
        } else {
            max = total - 1*2 - 2*2;
        }


    if (guess==max) {
        printf("yes");
    } else {
        printf("no");
    }

return 0;
}