#include <stdio.h>

int main() {

    int arr[5][5] = {};
    int N, max=-1, max_r, max_c;

    printf("Enter N: ");
    scanf("%d", &N);
    if ((N<1) || (N>5)) {
        printf("Wrong Input ! \n"); 
        return 0;
    }

    printf("Enter %d x %d elements: ", N, N);
    for (int i=0; i<N; i++) { // row

        for (int j=0; j<N; j++) { // col
            scanf(" %d", &arr[i][j]);
            if (arr[i][j] > max) {
                max = arr[i][j];
                max_r = i;
                max_c = j;
            } else if (arr[i][j] == max) {
                if ((max_r - max_c) > (i-j)) {
                    max_r = i;
                    max_c = j;
                } else if ((max_r - max_c) == (i-j)) {
                    if (max_r > i) {
                        max_r = i;
                        max_c = j;
                    }
                }
            }
            
        }
    }

    printf("matrix A: \n");
    for (int i=0; i<N; i++) { // row
        for (int j=0; j<N; j++) // col
            printf(" %d", arr[i][j]);
        printf("\n");
    }
    printf("max = %d (row=%d, col=%d)\n", max, max_r, max_c);


    int tmp;

    for (int i=0; i<(N/2); i++) {

        for (int j=i; j<(N-1-i); j++) {
            tmp = *(*(arr+i) + j);

            *(*(arr+i) + j) = *(*(arr+(N-1-j)) + i);

            *(*(arr + (N-1-j)) + i) = *(*(arr + (N-1-i)) + (N-1-j));

            *(*(arr+(N-1-i)) + (N-1-j)) = *(*(arr+j) + (N-1-i));

            *(*(arr+j) + (N-1-i)) = tmp;
        }
    }

    printf("After rotation A: \n");
    for (int i=0; i<N; i++) { // row
        for (int j=0; j<N; j++) // col
            printf(" %d", *(*(arr+i) + j));
        printf("\n");
    }

return 0;
}