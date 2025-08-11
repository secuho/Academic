#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

long int a, b;

int main() {
    
    scanf("%ld %ld", &a, &b);
    
    printf("%ld", (a+b)*(a-b));
    
    return 0;
}