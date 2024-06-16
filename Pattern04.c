//Print a pyramid pattern using numbers:

#include <stdio.h>

int main() {
    int rows, i, j, count = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", ++count);
        }
        printf("\n");
    }

    return 0;
}