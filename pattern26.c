
//26. Print a hollow half pyramid pattern using alphabets:


#include <stdio.h>

int main() {
    int rows, i, j;
    char ch = 'A';

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == rows)
                printf("%c ", ch);
            else
                printf("  ");
        }
        ch++;
        printf("\n");
    }

    return 0;
}