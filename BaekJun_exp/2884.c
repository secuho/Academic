#include <stdio.h>

int main()
{

    int H, M;

    scanf("%d %d", &H, &M);

    if (M >= 45)
    {
        M = M - 45;
    }
    else
    { // 45분 미만
        H = H - 1;
        M = (M - 45) + 60;
    }

    if (H == -1)
    {
        H = 23;
    }

    printf("%d %d", H, M);
}