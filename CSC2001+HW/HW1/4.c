#include <stdio.h>

int main(void) {

float num1, num2;

	printf("두 실수를 입력하시오: ");
	scanf("%f %f", &num1, &num2);

	printf("\n덧셈: %.2f, 뺄셈: %.2f, 나눗셈: %.2f, 곱셈: %.2f\n", num1+num2, num1-num2, num1/num2, num1*num2);

return 0;

}
