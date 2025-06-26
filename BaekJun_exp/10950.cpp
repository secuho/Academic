#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int amount, a, b;

int main () {

    scanf("%d", &amount);

    for (int i=1; i<=amount; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }

return 0;
}