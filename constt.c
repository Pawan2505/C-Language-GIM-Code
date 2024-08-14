// #include <stdio.h>

// int main()
// {
//     int a = 10;
//     a = 20;
//     printf("%d", a);
// }

// #include <stdio.h>

// int main()
// {
//    const int a = 10;
//     a = 20;           //Not Ok
//     printf("%d", a);
// }

// #include <stdio.h>

// int main()
// {
//    const int a;   // Declaration of variable
//     a = 20;           //Not Ok
//     printf("%d", a);
// }

// #include <stdio.h>

// int main()
// {
//     const int a; // Declaration of variable
//     printf("Please enter number  ");

//     scanf("%d", &a);   // ok
//     printf("%d", a);
// }

// Type 2:

// #include <stdio.h>
// #define a 13   //Micro => datatype not required for variable
// int main()
// {

//     printf("The value of a is : %d", a);
// }

// #include <stdio.h>
// #define a 13   //Micro => datatype not required for variable
// int main()
// {

//     a = 15;   // Not Ok

//     printf("The value of a is : %d", a);
// }

// #include <stdio.h>
// #define a   //Micro => datatype not required for variable
// int main()
// {

//     printf("Please enter value of a : ");

//     scanf("%d", &a);   // Not ok

//     printf("The value of a is : %d", a);
// }

// Scanf()

// #include <stdio.h>

// int main()
// {

//     float a = 23.7;
//     // float a = 23.7f;

//     printf("The value of a is : %0.1f", a);
// }

// #include <stdio.h>

// int main()
// {

//     float a;

//     printf("Please enter the value of a : ");
//     scanf("%f", &a);

//     printf("The value of a is : %f", a);
// }


// #include <stdio.h>

// int main()
// {

//     double a;

//     printf("Please enter the value of a : ");
//     scanf("%lf", &a);

//     printf("The value of a is : %lf", a);
// }



// #include <stdio.h>

// int main()
// {

//     char ch;

//     printf("Please enter the value of ch : ");
//     scanf("%c", &ch);

//     printf("The value of a is : %c", ch);
// }


//String = > char ch[];

// #include <stdio.h>

// int main()
// {

//     char ch[10];

//     printf("Please enter the value of ch : ");
//     scanf("%s", &ch);

//     printf("The value of a is : %s", ch);
// }



// Unary Operator


// #include <stdio.h>

// int main()
// {

//     int a = 10;
//     a++;             // a++ => a+1   post increment
//     printf("%d",a);
// }



// #include <stdio.h>

// int main()
// {

//     int a = 10;
//     ++a;             // ++a => a+1   pre increment
//     printf("%d",a);
// }


// #include <stdio.h>

// int main()
// {

//     int a = 10;
//     a--;             // a-- => a-1   post  decrement
//     printf("%d",a);
// }


// #include <stdio.h>

// int main()
// {

//     int a = 10;
//     --a;             // ++a => a-1   pre decrement
//     printf("%d",a);
// }



// #include <stdio.h>

// int main()
// {

//   int a = 2;   
//   int b = 3;

//   int c = a++ + ++a + b++ +b;  //2+4+3+4

//   printf("%d", c);
// }


// #include <stdio.h>

// int main()
// {

//   int a = 2;   
//   int b = 3;

//   int c = ++a + ++a + b++ +b;  //4+4+3+4

//   printf("%d", c);
// }


// #include <stdio.h>

// int main()
// {

//   int a = 2;   
//   int b = 3;

//   int c = a++ + a++ + b++ +b;  //2+3+3+4

//   printf("%d", c);
// }