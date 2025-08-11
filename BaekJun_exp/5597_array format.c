#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int k;
int num[30] = {0, }; // = {0, } -> 모두 0으로 초기화.

int main() {
    
    for (int m=1; m<=28; m++) {
        scanf("%d", &k);
        num[k-1] = 1;
    }
    
    k = 0;
    
    while (1) {
        if (num[k] == 0) {
          printf("%d\n", k+1);
        } 
        
        k++;
        
        if (k>=30) {
            break;
        }
    }
    
    return 0;
}