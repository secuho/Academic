#include <stdio.h>

int main(void) {

	int score;

	printf("점수를 입력해주세요: ");
	scanf("%d", &score);

	if (score > 100 || score < 0)
		printf("0~100 사이의 점수를 입력하세요.\n");
	else if (score >= 90 && score <= 100)
		printf("등급: A\n");
	else if (score >= 80 && score < 90)
		printf("등급: B\n");
	else if (score >= 70 && score < 80)
		printf("등급: C\n");
	else if (score >= 60 && score < 70)
		printf("등급: D\n");
	else
		printf("등급: F\n");

return 0;
}
