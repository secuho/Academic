#include <stdio.h>

int abs_compare(int a, int b);

int main(void) {

	int n1, n2;
	int temp;

	printf("두 정수를 입력하세요: ");
	scanf("%d %d", &n1, &n2);

	temp = abs_compare(n1, n2);

	printf("절댓값이 더 큰 수는 %d입니다.\n", temp);

return 0;
}


int abs_compare(int a, int b) {

	int n1, n2;
	int temp;

	n1 = a, n2 = b;

	if (a < 0)
		n1 = -n1;
	if (b < 0)
		n2 = -n2;

	if (n1 >= n2)
		temp = a;
	else
		temp = b;

return temp;
}
