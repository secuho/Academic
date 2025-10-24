#include <stdio.h>

int main() {

    int num, temp;

    printf("Put the number: ");
    scanf("%d", &num);

    for (int i=1; i<=num; i++) {

        temp = i;
        while (temp > 0) {
            if (temp % 10 == 3 || temp % 10 == 6 || temp % 10 == 9) {
                printf("%d ", i);
                break;
            }
                temp = temp / 10;
        }
    }

return 0; 
}