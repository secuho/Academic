#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

char num[101];
int N, hap=0;

int main () {

    scanf("%d", &N);
    scanf("%s", num);

    for (int i=1; i<=N; i++) {
        hap = hap + (num[i-1]-48);   //== num(i-1) - '0'
    }

    printf("%d", hap);


return 0;
}