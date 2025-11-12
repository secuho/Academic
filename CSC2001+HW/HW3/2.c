#include <stdio.h>

int main(void)
{
    char seq[10];
    int patlen;

    printf("Enter sequence: ");
    for (int i = 0; i < 10; i++)
        scanf(" %c", &seq[i]);

    for (int i = 0; i < 10; i++)
        if ((seq[i] != 'A') && (seq[i] != 'T') && (seq[i] != 'G') && (seq[i] != 'C'))
        {
            printf("Wrong Input ! \n");
            return 0;
        }

    printf("Enter pattern length: ");
    scanf("%d", &patlen);

    char pat[patlen];
    printf("Enter pattern: ");
    for (int i = 0; i < patlen; i++)
        scanf(" %c", &pat[i]);

    for (int i = 0; i < patlen; i++)
        if ((pat[i] != 'A') && (pat[i] != 'T') && (pat[i] != 'G') && (pat[i] != 'C'))
        {
            printf("Wrong Input ! \n");
            return 0;
        }


    int count=0, valid=0;
    int index[10]={};
    for (int j = 0; j < 10; j++)
    {
        if (seq[j] == pat[0]) {
            for (int i=1; i<=patlen; i++) {
                if (valid == (patlen-1)) {
                    count++;
                    index[j] = 1;
                    valid = 0;
                    break;
                }
                if (seq[j+i] == pat[i])
                    valid++;
            }
        }
    }

    
    printf("Count: %d\n", count);
    printf("Positions: ");
    if (count == 0)
        printf("%d\n", -1);
    else {
        for (int i=0; i<10; i++)
            if (index[i])
                printf("%d ", i);
        printf("\n");
    }

return 0;
}