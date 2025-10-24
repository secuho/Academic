#include <stdio.h>

int main() {

    unsigned int color = 0x123456;

    unsigned int red = (color >> 16) & 0xFF;
    unsigned int green = (color >> 8) & 0xFF;
    unsigned int blue = color & 0xFF;

    printf("원본color = 0x%x\n", color);
    printf("red = %u(0x%x)\n", red, red);
    printf("green = %u(0x%x)\n", green, green);
    printf("blue = %u(0x%x)\n", blue, blue);

return 0; 
}