#include <stdio.h>

int main(void)
{
    char seq1[10], seq2[10];

    printf("Enter sequence 1: ");
    for (int i = 0; i < 10; i++)
        scanf(" %c", &seq1[i]);
    printf("Enter sequence 2: ");
    for (int i = 0; i < 10; i++)
        scanf(" %c", &seq2[i]);

    for (int i = 0; i < 10; i++)
    {
        if ((seq1[i] != 'A') && (seq1[i] != 'T') && (seq1[i] != 'G') && (seq1[i] != 'C') && (seq1[i] != 'a') && (seq1[i] != 't') && (seq1[i] != 'g') && (seq1[i] != 'c'))
        {
            printf("Wrong Input ! \n");
            return 0;
        }
        if ((seq2[i] != 'A') && (seq2[i] != 'T') && (seq2[i] != 'G') && (seq2[i] != 'C') && (seq2[i] != 'a') && (seq2[i] != 't') && (seq2[i] != 'g') && (seq2[i] != 'c'))
        {
            printf("Wrong Input ! \n");
            return 0;
        }

        if (seq1[i] >= 97)
            seq1[i] -= 32;
        if (seq2[i] >= 97)
            seq2[i] -= 32;
    }

    int len = 0, lenstore = 0, first;
    for (int j = 0; j < 10; j++)
    {
        if (seq1[j] == seq2[j])
        {
            len++;

            if (len > lenstore) {
                first = j - len + 1;
                lenstore = len;
            }

        }
        else
            len = 0;
    }

    if ((lenstore == 0) && (len == 0))
        first = -1;

    printf("sequence 1: ");
    for (int i = 0; i < 10; i++)
        printf("%c", seq1[i]);
    printf("\n");

    printf("sequence 2: ");
    for (int i = 0; i < 10; i++)
        printf("%c", seq2[i]);
    printf("\n");

    printf("Longest match length: %d\n", lenstore);
    printf("Starts at %d\n", first);

return 0;
}
