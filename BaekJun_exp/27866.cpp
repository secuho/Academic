#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

char S[1000];
int i;

int main () {

    scanf("%s", S);
    scanf("%d", &i);

    printf("%c", S[i-1]);

return 0;
}