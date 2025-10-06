#include <stdio.h>
#include <string.h>

int main()
{

    int inc[26], len, f_i = 0;
    char S[101];

    for (int i = 0; i < 26; i++)
    {
        inc[i] = -1;
    }

    scanf("%s", S);

    len = strlen(S);

    int hole;

    for (int j = 0; j < len; j++)
    {
        hole = S[j] - 'a';
        if (inc[hole] == -1)
            inc[hole] = j;
    }

    for (int k = 0; k < 26; k++)
        printf("%d ", inc[k]);
}