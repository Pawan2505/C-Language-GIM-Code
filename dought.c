// #include <stdio.h>

// int main()
// {
//     int arr[7] = {3,12, 34, 56, 78, 45};

//     int value = 444;
//     int postion = 3;
    

//     for (int i = 6; i > postion; i--)
//     {
       
//         arr[i] = arr[i - 1];
//     }

//     arr[3] = value;

//     for (int i = 0; i < 7; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }

// Delete element at position of index

#include <stdio.h>

int main()
{
    int arr[5] = {23, 43, 56, 67, 7};

    int position = 1;

    for (int i = position; i < 5; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("Modified array : ");

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }
}