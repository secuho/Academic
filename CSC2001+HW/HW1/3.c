#include <stdio.h>

int main(void) {

const float Pi = 3.1415;
float r, A, L;

	printf("반지름을 입력하시오: ");
	scanf("%f", &r);

	A = Pi*r*r;
	L = 2*Pi*r;

	printf("원의 넓이: %.2f, 원의 지름: %.2f \n", A, L);


return 0;

}
