#include <stdio.h>

int main(void) {

int num1, num2;

	printf("두 개의 정수를 입력하시오: ");
	scanf("%d %d", &num1, &num2);

	printf("\n나눗셈 결과: %.3f\n", (float) num1/num2);


return 0;

}
