#include <stdio.h>

int main()
{

    // Row

    for (int row = 1; row <= 5; row++)
    {
        // space
        for (int space = 1; space<=5-row; space++)
        {
            printf(" ");
        }

        // Column

        for (int col = 1; col <= row; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }
}