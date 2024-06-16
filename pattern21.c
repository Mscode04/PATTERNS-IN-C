//21. Print a hollow diamond pattern using alphabets:


#include <stdio.h>

int main() {
    int rows, i, j, space;
    char ch;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    space = rows - 1;
    ch = 'A';

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= space; j++)
            printf(" ");
        space--;
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1)
                printf("%

c", ch);
            else
                printf(" ");
        }
        ch++;
        printf("\n");
    }

    space = 1;
    ch = ch - 2;

    for (i = 1; i <= rows - 1; i++) {
        for (j = 1; j <= space; j++)
            printf(" ");
        space++;
        for (j = 1; j <= 2 * (rows - i) - 1; j++) {
            if (j == 1 || j == 2 * (rows - i) - 1)
                printf("%c", ch);
            else
                printf(" ");
        }
        ch--;
        printf("\n");
    }

    return 0;
}
