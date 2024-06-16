//12. Print a cross pattern using stars:


#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows; j++) {
            if (j == i || j == rows - i + 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}


