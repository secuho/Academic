#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

char score[3];

int main() {
    
    scanf("%s", score);
    
    if (score[0] == 'A' && score[1] == '+') printf("4.3");
    else if (score[0] == 'A' && score[1] == '0') printf("4.0");
    else if (score[0] == 'A' && score[1] == '-') printf("3.7");
    else if (score[0] == 'B' && score[1] == '+') printf("3.3");
    else if (score[0] == 'B' && score[1] == '0') printf("3.0");
    else if (score[0] == 'B' && score[1] == '-') printf("2.7");
    else if (score[0] == 'C' && score[1] == '+') printf("2.3");
    else if (score[0] == 'C' && score[1] == '0') printf("2.0");
    else if (score[0] == 'C' && score[1] == '-') printf("1.7");
    else if (score[0] == 'D' && score[1] == '+') printf("1.3");
    else if (score[0] == 'D' && score[1] == '0') printf("1.0");
    else if (score[0] == 'D' && score[1] == '-') printf("0.7");
    else if (score[0] == 'F') printf("0.0");
    
    return 0;
}