#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int value, huge, money, amount, total;

int main () {

    scanf("%d", &value);

    scanf("%d", &huge);

    for (int i=1; i<=huge; i++) {
        scanf("%d %d", &money, &amount);
        total = total + money*amount;
        money = 0;
        amount = 0;
    }

    if (total == value) {
        printf("Yes");
    } else {
        printf("No");
    }

return 0;
}