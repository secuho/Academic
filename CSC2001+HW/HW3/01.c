#include <stdio.h>

int main(void)
{
    char seq1[11], seq2[11];

    printf("Enter sequence 1: ");
    scanf("%s", seq1);
    printf("Enter sequence 2: ");
    scanf("%s", seq2);

    for (int i = 0; i < 11; i++)
        if (seq1[i] >= 97)
            seq1[i] -= 32;

    for (int i = 0; i < 11; i++)
        if (seq2[i] >= 97)
            seq2[i] -= 32;

    int temp, len = 0, lenstore = 0, first = 10, firststore = 0;
    for (int j = 0; j < 11; j++)
    {
        if (seq1[j] == seq2[j])
        {
            if (j - temp == 1)
            {
                len++;
                lenstore = len;

                if (j <= first)
                {
                    first = j;
                    firststore = first;
                }
            }
            else
            {
                len = 0;
                first = 10;
            }

            temp = j;
        }
    }

    if (lenstore >= len)
        first = firststore;

    if (len == 0)
        first = -1;

    printf("sequence 1: %s\n", seq1);
    printf("sequence 2: %s\n", seq2);
    printf("Longest match length: %d\n", len);
    printf("Starts at %d\n", first);

    return 0;
}