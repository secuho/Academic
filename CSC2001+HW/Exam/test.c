#include<stdio.h>
int main(void)
{
double f = 0.1;
double d = 0.1;
// 같은0.1이지만내부표현은다를수있음
if(f == d)
printf("f와d는같습니다.\n");
else
printf("f와d는다릅니다.\n");
printf("float f = %.20f\n", f);
printf("double d = %.20f\n", d);
return 0;
}