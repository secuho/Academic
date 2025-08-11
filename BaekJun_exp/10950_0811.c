#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int a, b, amount;

int main() {

    scanf("%d", &amount);

    for (int n=1; n<=amount; n++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
        }
            
}
