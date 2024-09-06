#include <stdio.h>

int calculater(int a, int b, char ch)
{

    switch (ch)
    {
    case '+':
        // printf("%d", a + b);
        
        return a + b;
        break;
    case '-':
        // printf("%d", a - b);
        
        return a - b;
        break;
    default:
        printf("Please enter valid data!");
    }
}

int main()
{
    int value = calculater(10, 12, '+');
    printf("%d", value);
}