#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define MAX_ELEMENTS 100
#define MAX_VALUE 1

int main() {
    int i,j,k,l;
    int A[MAX_ELEMENTS][MAX_ELEMENTS], B[MAX_ELEMENTS][MAX_ELEMENTS];
    time_t m;

    srand((unsigned) time(&m));

    // fill both matrix'es
    // I know, it should be a function
    // but I am lazy, sorry
    for (i = 0; i < MAX_ELEMENTS; i++) {
        for (j = 0; j < MAX_ELEMENTS; j++) {
            A[i][j] = rand() % MAX_VALUE;
            B[i][j] = rand() % MAX_VALUE;
        }
    }

    // print the result of multiplying both matrix'es
    // I know, it should be a function also
    for (i = 0; i < MAX_ELEMENTS; i++) {
        printf("[ ");
        for (j = 0; j < MAX_ELEMENTS; j++) {
            k = 0;

            for (l = 0; l < MAX_ELEMENTS; l++)
                k += A[j][i] * B[i][j];
            
            printf("%d ", k);
        }
        printf("]\n");
    }

    return 0;
}