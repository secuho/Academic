#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int amount;

int main () {

    scanf("%d", &amount);

    int value[amount*2];

    for (int i=1; i<=amount; i++) {
        int a=0;    int b=0;
        scanf("%d %d", &a, &b);
        value[i*2-1] = a+b;
    }

    for (int j=1; j<=amount; j++) {
        printf("Case #%d: %d\n", j, value[j*2-1]);
    }

return 0;
}