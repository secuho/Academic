#include <stdio.h>

int reverse_number(int num);

void is_palindrome(int num, int rev_num);

int main(void) {

	int num, rev_num;

	printf("세 자리 정수를 입력하세요: ");
	scanf("%d", &num);

	if (num >= 100 && num < 1000) {
		rev_num = reverse_number(num);

		printf("뒤집은 수는 %d입니다.\n", rev_num);

			is_palindrome(num, rev_num);
	} else
		printf("세 자리 정수가 아닙니다.\n");

return 0;
}


int reverse_number(int num) {

	int n1, n2, n3;
	int temp;

	temp = num;

	n3 = temp % 10;
	temp = temp / 10;

	n2 = temp % 10;
	temp = temp / 10;

	n1 = temp;

	
	int rev_num;

	rev_num = n3*100 + n2*10 + n1;

return rev_num;
}


void is_palindrome(int num, int rev_num) {

	if (num == rev_num)
		printf("회문입니다.\n");
	else
		printf("회문이 아닙니다.\n");

return;
}
