#include <stdio.h>

int main()
{

    int N, H, W, cs, room, count = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {

        scanf("%d %d %d", &H, &W, &cs);

        for (int j = 1; j <= W; j++)
        { // 호수
            if (count == cs)
                break;

            for (int k = 1; k <= H; k++)
            { // 층수
                count++;
                room = k * 100 + j;

                if (count == cs)
                    break;
            }
        }

        printf("%d\n", room);

        cs = count = 0; // reset
    }
}