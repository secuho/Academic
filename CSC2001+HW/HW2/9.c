#include <stdio.h>

int is_triangle(int a, int b, int c);
void triangle_type(int a, int b, int c);

int main(void) {

	int a, b, c;
	int temp;

	printf("세 변의 길이를 입력하세요: ");
	scanf("%d %d %d", &a, &b, &c);

	temp = is_triangle(a, b, c);

	if (temp) {
		printf("삼각형 가능: ");
		triangle_type(a, b, c);
	} else
		printf("삼각형을 만들 수 없습니다.\n");

return 0;
}


int is_triangle(int a, int b, int c) {

	int result;

	if ((a+b>c) && (a+c>b) && (b+c>a))
		result = 1;
	else
		result = 0;

return result;
}


void triangle_type(int a, int b, int c) {

	if (a==b && b==c)
		printf("정삼각형\n");
	else if (a==b || b==c || a==c)
		printf("이등변삼각형\n");
	else
		printf("일반 삼각형\n");

return;
}
