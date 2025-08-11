#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

long int T;
int a, b;

int main() {
    
    scanf("%ld", &T);
    
    for (int n=1; n<=T; n++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
    
    return 0;
}