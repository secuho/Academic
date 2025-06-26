#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int year, mod=0;

int main () {

    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 != 0) {
            mod = 1;
        }
        else if (year % 400 == 0) {
            mod = 1;
        }
        }
    else {
            mod = 0;
        }

    if (mod == 1) {
        printf("1");
    } else {
        printf("0");
    }

return 0;
}