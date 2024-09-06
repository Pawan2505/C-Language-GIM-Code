

// #include <stdio.h>

// int main()
// {

//     for (int number = 1; number <= 10; number++)
//     {
//         printf("Number : %d\n", number);
//     }
// }

// #include <stdio.h>

// int main()
// {

//     // Row

//     for (int row = 1; row <= 5; row++)
//     {
//         int col;
//         // space
//         for (int space = 1; space <= 5 - row; space++)
//         {
//             printf(" ");
//         }

//         // Column

//         for (col = 1; col <= row; col++)
//         {
//             printf("%d", col);
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>

// int main()
// {

//     // Row

//     for (int row = 0; row <= 5; row++)
//     {

//         // space
//         for (int space = 1; space <= row; space++)
//         {
//             printf(" ");
//         }

//         // Column

//         for (int col = 1; col <= 5 - row; col++)
//         {
//             if (row == 0 || row == 2 || row == 4)
//             {
//                 if (col == 1 || col == 3 || col == 5)
//                 {
//                     printf("1");
//                 }
//                 else
//                 {
//                     printf("0");
//                 }
//             }

//             if (row == 1 || row == 3)
//             {
//                 if (col == 1 || col == 3 || col == 5)
//                 {
//                     printf("0");
//                 }
//                 else
//                 {
//                     printf("1");
//                 }
//             }
//         }
//         printf("\n");
//     }
// }




#include <stdio.h>

int main()
{

    for (int row = 0; row < 5; row++)
    {

        // left side

        // number

        for (int col = 1; col <= 5 - row; col++)
        {
            printf("%d", col);
        }

        // Space
        for (int space = 1; space <= row; space++)
        {
            printf(" ");
        }

        // Right Side

        // space

        for (int space = 1; space <= row; space++)
        {
            printf(" ");
        }

        // Number

        for (int col = 5 - row; col >= 1; col--)
        {
            printf("%d", col);
        }
        printf("\n");
    }
}