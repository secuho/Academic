#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

long int n, m, total;

int main () {
    
    scanf("%ld %ld", &n, &m);
    
    total = n - m;
    
        if (total < 0) {
            total = -total;
        }
    
    printf("%ld", total);
    
}