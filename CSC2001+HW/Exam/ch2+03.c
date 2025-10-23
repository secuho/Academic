#include <stdio.h>

int main(void)
{

    int korean, english, math;
    int sum;
    double avg;

    scanf("%d %d %d", &korean, &english, &math);

    sum = korean + english + math;
    avg = sum / 3.0;

    printf("%d %.2lf\n", sum, avg);

    return 0;
}