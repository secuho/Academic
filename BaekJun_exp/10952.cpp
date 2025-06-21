#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int amount=1;
int a, b;
int value[100];


int main () {

    for (int i=1; i<=amount+1; i++) {
        a=0;  b=0;
        scanf("%d %d", &a, &b);
        
            value[i-1] = a+b;

        if (a==0 && b==0) {
            break;
        } else {
            amount = amount + 1;
        }
    }

    for (int j=1; j<=amount+1; j++) {
        printf("%d\n", value[j]);
    }

return 0;
}