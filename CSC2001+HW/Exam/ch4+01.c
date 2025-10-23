#include <stdio.h>

const int a = 10;
const int b = 010;
const int c = 0x10;

int sum = a + b + c;

int main(void)
{
    printf("Sum(10): %d\n", sum);
    printf("Sum(16): %x\n", sum);
    printf("Sum(8): %o\n", sum);
}