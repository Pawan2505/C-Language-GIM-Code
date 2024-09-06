// #include <stdio.h>

// int main()
// {
//     int arr[10] = {1, 2, 3, 4, 5};
//     int n = 5;
//     int value = 99;

//     printf("Original array:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     if (n >= 10)
//     {
//         printf("Array is full. Cannot insert a new element.\n");
//         return 1;
//     }

//     for (int i = n; i > 2; i--)
//     {
//         arr[i] = arr[i - 1];
//     }

//     arr[2] = value;

//     n++;

//     printf("Array after inserting %d at the 2nd index:\n", value);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }


// Insert element at index position


// #include <stdio.h>

// int main()
// {
//     int arr[6] = {12, 34, 564, 65, 66};

//     printf("Original Array : ");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     printf("Modified Array : ");

//     int value = 22;
//     int position = 2;

//     for (int i = 6; i > position; i--)
//     {
//         arr[i] = arr[i - 1];
//     }

//     arr[2] = value;

//     printf("Output : ");

//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }



// Delete element at index position

// #include <stdio.h>

// int main()
// {
//     int arr[6] = {12, 34, 564, 65, 66};

//     printf("Original Array : ");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     printf("Deleted  Array : ");

  
//     int position = 2;

//     for (int i = position; i < 6; i++)
//     {
//         arr[i] = arr[i + 1];
//     }

//     printf("Output : ");

//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }