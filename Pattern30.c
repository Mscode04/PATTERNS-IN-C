























//30. Print a zigzag pattern using stars:


#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= cols; j++) {
            if (i % 2 == 0) {
                if (j == cols)
                    printf("*");
                else
                    printf(" ");
            } else {
                if (j == 1)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
