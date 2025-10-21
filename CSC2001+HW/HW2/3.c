#include <stdio.h>

int get_median(int x, int y, int z);

int main(void) {

	int n1, n2, n3;
	int median;

	printf("세 개의 정수를 입력하세요: ");
	scanf("%d %d %d", &n1, &n2, &n3);

	median = get_median(n1, n2, n3);

	printf("중앙값은 %d입니다. \n", median);

return 0;
}


int get_median(int x, int y, int z) {

	int median;

	if ((x>y && x<z) || (x>z && x<y))
		median = x;
	else if ((x<y && y<z) || (z<y && y<x))
		median = y;
	else if ((z>x && z<y) || (z>y && z<x))
		median = z;

return median;
}
