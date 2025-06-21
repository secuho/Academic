#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int end, hap;

int main () {

    scanf("%d", &end);

    for (int i=1; i<=end; i++) {
        hap = hap + i;
    }

    printf("%d", hap);
    
return 0;
}