#include <stdio.h>

int main()
{
    int number = 5678;
    int firstDigit, lastDigit, sum;

    lastDigit = number % 10;

    firstDigit = number;
    while (firstDigit >= 10)
    {
        firstDigit = firstDigit / 10;
    }

    sum = firstDigit + lastDigit;

    printf("The sum of the first and last digits of %d is: %d\n", number, sum);

    return 0;
}
