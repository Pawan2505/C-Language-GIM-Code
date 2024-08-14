#include <stdio.h>
int main()
{
    int a;
    printf("Enter First Number : ");
    scanf("%d", &a);

    int b;
    printf("Enter Second Number : ");
    scanf("%d", &b);

    int c;
    printf("Enter Third Number : ");
    scanf("%d", &c);

    int d;
    printf("Enter Fourth Number : ");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c && a > d)
            printf("%d is grater from all other number ", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d is grater from all other number ", b);
    }
    else if (c > b && c > a && c > d)
    {
        printf("%d is grater from all other number ", c);
    }
    else if (d > b && d > c && d > a)
    {
        printf("%d is grater from all other number ", d);
    }

    else
    {
        printf("All number are equals!");
    }
}