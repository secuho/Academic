#include <stdio.h>
#include <string.h>

int main()
{

    int count = 1, len;
    char S[1000000];

    scanf("%[^\n]s", S);

    len = strlen(S);

    if (S[0] == ' ' || S[len - 1] == ' ')
        count--;

    if (S[0] == ' ' && S[len - 1] == ' ')
        count--;

    for (int i = 0; i < len; i++)
    {
        if (S[i] == ' ')
        {
            count++; // 공백 1개 => 단어 +1
        }
    }

    printf("%d", count);
}