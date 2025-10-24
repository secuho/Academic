#include <stdio.h>

int main() {

    int num, temp;

    printf("Put the number: ");
    scanf("%d", &num);

    for (int i=1; i<=num; i++) {

        if (i%3!=0)
            continue;

        printf("%d ", i);
        
    }

return 0; 
}