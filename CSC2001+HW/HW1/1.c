#include <stdio.h>

int main(void) {

int kor, eng, math, total;
float avg;

	printf("국어 점수를 입력하시오: ");
	scanf("%d", &kor);
	printf("영어 점수를 입력하시오: ");
	scanf("%d", &eng);
	printf("수학 점수를 입력하시오: ");
	scanf("%d", &math);

	total = kor + eng + math;
	avg = total / 3;

	printf("\n총점: %d, 평균: %.2f\n", total, avg);


return 0;

}
