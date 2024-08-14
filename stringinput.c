
// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("Please enter your name : ");
//     ch = getchar(); // input by user
//     printf("Value of str : %c", ch);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("Please enter your name : ");
//     ch = getchar(); // input by user
//     // printf("Value of str : ");
//     putchar(ch);
//     return 0;
// }


// Method 1:

// #include <stdio.h>
// int main()
// {
//     char str[10];
//     printf("Please enter your name : ");
//     gets(str); // input by user
//     printf("Value of str : %s", str);
//     return 0;
// }

// Method 2:  char fgets(str, size, FILE stream)

// #include <stdio.h>
// #define MAX_LIMIT 5
// int main()
// {
//     char str[MAX_LIMIT];
//     printf("Please enter your name : ");
//     fgets(str, MAX_LIMIT, stdin);
//     printf("%s", str);

//     return 0;
// }

// Output using fputs()

// #include <stdio.h>
// #define A 20

// int main()
// {
//     char str[A];
//     fputs("Please enter your name : ", stdout);
//     fgets(str, A, stdin);
//     fputs(str, stdout);

//     return 0;
// }

// Method 3:

// #include <stdio.h>

// int main()
// {
//     int n = 20;
//     char str[n];
//     printf("Please enter your name : ");
//     fgets(str, n, stdin);
//     printf("%s", str);

//     return 0;
// }

// Method 4:

// #include <stdio.h>
// int main()
// {
//     char str[5];
//     printf("Please enter your name : ");
//     scanf("%[^\n]c", str);
//     printf("%s", str);

//     return 0;
// }

// Method 5:

#include <stdio.h>

int main()
{
    char str[100];
    printf("Please enter your name : ");
    scanf("%[^\n]s", str);
    printf("%s", str);
    return 0;
}



