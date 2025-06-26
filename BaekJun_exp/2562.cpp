#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int num[10], max, min;

int main () {

    for (int i=0; i<9; i++) {
        scanf("%d", num[i]);
        
        max = min = num[i];

        if (num[i] >= max) {
            max = num[i];
        }
        else if (num[i] <= min) {
            min = num[i];
        }
    }

    printf("%d\n", max);
    printf("%d", min);

return 0;
}