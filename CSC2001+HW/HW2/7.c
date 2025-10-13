#include <stdio.h>

int main (void) {

	int n1, n2, n3;
	int min, temp;

	printf("세 개의 정수를 입력하세요: ");
	scanf("%d %d %d", &n1, &n2, &n3);

	min = n1;

	if (n2 < min)
		min = n2;
	if (n3 < min)
		min = n3;

	if (min % 2 == 0)
		printf("가장 작은 수는 %d이고, 짝수입니다.\n", min);
	else
		printf("가장 작은 수는 %d이고, 홀수입니다.\n", min);

return 0;
}
