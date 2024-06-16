//14. Print a hollow triangle pattern using stars:


#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == rows)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}