//29. Print a Pascal's triangle pattern:

#include <stdio.h>

long factorial(int);

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        for (j = 0; j <= rows - i - 2; j++)
            printf(" ");

        for (j = 0; j <= i; j++)
            printf("%ld ", factorial(i) / (factorial(j) * factorial(i - j)));

        printf("\n");
    }

    return 0;
}

long factorial(int n) {
    long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}