#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

long long int a, b, c;

int main() {
    
    scanf("%lld %lld %lld", &a, &b, &c);
    
    printf("%lld", a+b+c);
    
    return 0;
}