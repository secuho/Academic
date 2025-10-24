#include <stdio.h>

long power(long base, int exp);

int main() {

    long base, result;
    int exp;

    printf("Put the base, exp: ");
    scanf("%ld %d", &base, &exp);

    if (exp == 1)
        result = base;
    else if (exp == 0)
        result = 1;
    else if (exp < 0) {
        printf("음수 지수는 지원하지 않습니다.");
        return 0;
    }
    else
        result = power(base, exp);


    printf("%ld^%d = %ld\n", base, exp, result);

return 0; 
}


long power(long base, int exp) {

    if (exp == 0)
        return 1;
    return (base * power(base, exp-1));

}