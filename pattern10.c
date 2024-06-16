//10. Print an inverted pyramid pattern using stars:


#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= rows - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
