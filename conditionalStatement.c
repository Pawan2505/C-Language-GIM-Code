

// if Statement

// #include <stdio.h>

// int main()
// {
//     int age;
//     printf("Please enter your age : ");
//     scanf("%d", &age);

//     if (age >= 18)
//     {
//         printf("Your are Elligoble for Vote!");
//     }
//     else
//     {
//         printf("Your are not Elligoble for Vote!");
//     }
// }






// #include <stdio.h>

// int main()
// {
//     int marks;
//     printf("Please enter your Marks : ");
//     scanf("%d", &marks);

//     if (marks >= 90)
//     {
//         printf("Grade A");
//     }
//     else if (marks >= 80)
//     {
//         printf("Grade B");
//     }
//     else if (marks >= 70)
//     {
//         printf("Grade C");
//     }
//     else if (marks >= 30)
//     {
//         printf("Pass ho gye bhai");
//     }
//     else
//     {
//         printf("Bhai fail ho gye ap!");
//     }
// }




// Nested If condition



#include <stdio.h>

int main()
{
    int marks;
    printf("Please enter your Marks : ");
    scanf("%d", &marks);

   if(marks>=80){
    if(marks>=90){
        printf("Grade A+");
    }else{
         printf("Grade A");
    }
   }
 
}