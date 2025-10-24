#include<stdio.h>

int fibonacci(int n);

int main(void)
{
int num;

    printf("피보나치수열에서 n번째항을구합니다. n 입력: ");
    scanf("%d", &num);

        if(num < 0) {
            printf("음수가 입력되었습니다.\n");
            return 0;
        }

    printf("피보나치%d번째항: %d\n", num, fibonacci(num-1));
return 0;
}

int fibonacci(int n)
{
if(n < 2)
return n;// fib(0) = 0, fib(1) = 1
else
return fibonacci(n-1) + fibonacci(n-2);
}