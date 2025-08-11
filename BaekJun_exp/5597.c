#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int k;
int num[30]; // num[0] ~ num[29] => 30개 (번-1)

int main() {
    
    for (int n=1; n<=30; n++) {
        num[n-1] = 0;
    }
    
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