#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int N, base, first1, second1, second2, hap, cycle=0;

int main () {

    scanf("%d", &N);
        base = N;

        while(1) {
            if (N < 10) {
                N = N*10 + N;
        } else {
                second1 = N;
                while (second1 > 9) {
                second1 = second1 - 10;
                }

                first1 = (N - second1) / 10;

                hap = first1 + second1;

            if (hap < 10) {
                    second2 = hap;
            } else {
                    second2 = hap;
                    while (second2 > 9) {
                    second2 = second2 - 10;
                    }
            }

                N = second1*10 + second2; // 새로운 수
                }
            
            cycle++;

        if (N == base) {
            break;
        }

        }

    printf("%d", cycle);

return 0;
}