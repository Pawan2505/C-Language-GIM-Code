// #include <stdio.h>
// int main()
// {
//     int row = 3;
//     int col = 3;
//     int arr[row][col];
//     // input

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("Enter value at arr[%d][%d] index : ",i,j);
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     // Output

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ",arr[i][j]);

//         }
//         printf("\n");
//     }
// }

#include <stdio.h>
int main()
{

    int arr[3][3] = {{11, 22, 33}, {44, 55, 66}, {665, 77, 23}};

    arr[0][2] = 80;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}