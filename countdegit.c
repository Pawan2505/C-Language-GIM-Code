#include <stdio.h>

int main() {
    int number = 5678;  
    int count = 0;

    
    while (number != 0) {
        number = number / 10;
        count++;
    }

   
    printf("The number of digits in 5678 is: %d\n", count);

    return 0;
}
