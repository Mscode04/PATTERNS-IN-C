//25. Print a solid parallelogram pattern using stars:


#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++)
            printf(" ");
        for (j = 1; j <= cols; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
