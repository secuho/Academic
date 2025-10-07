#include <stdio.h>

int main()
{

    int N, M = 0;
    float sum = 0;

    scanf("%d", &N);

    int score[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &score[i]);

        if (M < score[i])
            M = score[i];
    }

    for (int j = 0; j < N; j++)
    {
        sum = sum + ((float)score[j] / M * 100);
    }

    printf("%f", sum / N);
}