#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int a, b;

int main() {
    
    // scanf 함수는 입력받은 인자 개수를 반환.
    // EOF 의 경우, scanf 함수 == -1 값 반환.
    while(scanf("%d %d", &a, &b) == 2) {
        printf("%d\n", a+b);
    }
    
    return 0;
}