#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program starts here */
{
    int a, b;         /* Declare integers for user input */
    int c, d, e, g;   /* Declare integers for add, sub, mul, modulo */
    float f;          /* Declare float for division result */

    printf("Enter a number for A : ");    /* Prompt user to enter value for A */
    scanf("%d", &a);                      /* Read and store integer input in a */

    printf("Enter a number for B : ");    /* Prompt user to enter value for B */
    scanf("%d", &b);                      /* Read and store integer input in b */

    c = a + b;                            /* Addition */
    printf("Sum            = %d\n", c);   /* Print addition result */

    d = a - b;                            /* Subtraction */
    printf("Subtraction    = %d\n", d);   /* Print subtraction result */

    e = a * b;                            /* Multiplication */
    printf("Multiplication = %d\n", e);   /* Print multiplication result */

    f = (float)a / b;                     /* Division - cast to float before dividing */
    printf("Division       = %.2f\n", f); /* Print division result upto 2 decimal places */
          
    g = a % b;                            /* Modulo - gives remainder after division */
    printf("Modulo         = %d\n", g);   /* Print remainder */

    return 0;   /* Return 0 = program executed successfully */
}
