#include <stdio.h>
#include <string.h>

int main()
{

    int N, len, temp = 0, point = 0;
    char S[81];

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {

        scanf("%s", &S[0]);

        len = strlen(S);

        for (int j = 0; j < len; j++)
        {
            if (S[j] == 'O')
            {
                temp++;
                point = point + temp;
            }
            else
                temp = 0;
        }

        printf("%d\n", point);

        point = temp = 0;
    }
}