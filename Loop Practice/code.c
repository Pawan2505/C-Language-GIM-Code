// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 100; i++)
//     {
//         printf("%d\n", i);
//     }
// }

#include <stdio.h>
int main()
{


    for (int row = 1; row <= 5; row++)
    {

        // space

        for(int space = 1; space<=5-row; space++){
            printf(" ");
        }

        for (int col = 1; col <= row; col++)
        {
            printf("*");
        }
        printf(" ");
          for (int col = 1; col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
}