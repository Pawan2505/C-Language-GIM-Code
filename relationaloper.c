// #include<stdio.h>

// int main(){

//     int a;
//     printf("Please enter number : ");
//     scanf("%d",&a);

//     if(a%2 == 0){
//         printf("Even Number");
//     }else{
//         printf("Odd Number");
//     }
// }

// #include<stdio.h>

// int main(){

//     int a;
//     printf("Please enter number : ");
//     scanf("%d",&a);

//     if( a != 5){
//         printf("Your number is not equal to 5");
//     }
//     else{
//         printf("Your number is 5");
//     }
// }

// && || !

// #include<stdio.h>

// int main(){

//     int a;
//     printf("Please enter number : ");
//     scanf("%d",&a);

//     if((a%2 == 0) || (a >=10)){
//         printf("Your number is Even Number but greater than 9");
//     }else{
//         printf("Target Incomplete");
//     }
// }

#include <stdio.h>

int main()
{

    int a;
    printf("Please enter number : ");
    scanf("%d", &a);

    if (!a)
    {
        printf("Your number is Even Number but greater than 9");
    }
    else
    {
        printf("Target Incomplete");
    }
}
