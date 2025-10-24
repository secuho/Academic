#include <stdio.h>

int main() {

    long budget, loan, lastloan, total;
    int stage, age, result=0;

    printf("연 소득을 입력하세요: ");
    scanf("%ld", &budget);
    printf("신용 등급을 입력하세요: ");
    scanf("%d", &stage);
    printf("대출 금액을 입력하세요: ");
    scanf("%ld", &loan);
    printf("이미 받은 대출금을 입력하세요: ");
    scanf("%ld", &lastloan);
    printf("나이를 입력하세요: ");
    scanf("%d", &age);

    if (budget >= 30000000)
        if (stage <= 10 && stage >= 1)
            if (loan <= (budget / 2))
                if (age >= 20 && age <= 60)
                    result = 1;

    if (result)
        printf("대출 승인\n");
    else
        printf("대출 거부\n");


return 0;
}