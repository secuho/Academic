#include <stdio.h>

int main() {

    int num;

    printf("Put the Integer: ");
    scanf("%d", &num);

    printf("~num: %d\n", ~num);
    printf("num << 1: %d\n", (num<<1));
    printf("num >> 1: %d\n", (num>>2));

    printf("~num(16): 0x%x\n", ~num);

return 0; 
}