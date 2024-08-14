// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("Please Enter value a : ");
//     scanf("%d", &a);
//     int b;
//     printf("Please enter value b : ");
//      scanf("%d", &b);
//     // int c;
//     // printf("Please enter value c : ");
//     // scanf("%d", &c);

//     // (a > b) ? printf("Greater value is A (%d)",a) : (b>c)?printf("Greater value is B (%d)",b):printf("Greate value is C (%d)",c);
//     (a > b) ? printf("Greater value is A (%d)",a) : printf("Greater value is B (%d)",b);
// }

#include <stdio.h>

int main()
{
    int a;
    printf("Please Enter value a : ");
    scanf("%d", &a);
    getchar();
    char str;
    printf("Please enter operator string : ");
    scanf("%c", &str);
    int b;
    printf("Please enter value b : ");
    scanf("%d", &b);

    switch (str)
    {
    case '+':
        printf("Addition of two number : %d", a + b);
        break;
    case '-':
        printf("Addition of two number : %d", a - b);
        break;
    case '*':
        printf("Addition of two number : %d", a * b);
        break;
    case '/':
        printf("Addition of two number : %d", a / b);
        break;

    default:
        printf("Please enter valid operator!");
    }
}