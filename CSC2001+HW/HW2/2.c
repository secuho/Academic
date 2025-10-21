#include <stdio.h>

int sum(unsigned int x);

int main(void) {

	unsigned int num;
	int temp, step=2;

	printf("입력  > ");
	scanf("%d", &num);

	temp = sum(num);

	while (1) {
		if ( temp >= 10 ) {
			temp = sum(temp);
			step++;
		} else {
			break;
		}
	}

	printf("출력  > %d %d\n", step, temp);

return 0;

}

int sum(unsigned int x) {

	int hap=0;
	unsigned int temp;

	temp = x;

	while (1) {
	
		hap = hap + (temp % 10);

		if (temp/10 == 0)
			break;

		temp = (temp / 10);
	}

return hap;
}
