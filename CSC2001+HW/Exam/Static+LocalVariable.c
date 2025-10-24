#include<stdio.h>

void countCalls(void);

int main(void)
{

    for(int i= 0; i< 5; i++) {

        countCalls();

}

return 0;
}

void countCalls(void)
{

    static int staticCount= 0;// 정적변수
    int localCount= 0;// 일반지역변수

        staticCount++;
        localCount++;
        
        printf("staticCount= %d, localCount= %d\n", staticCount, localCount);

}