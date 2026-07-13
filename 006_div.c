#include <stdio.h>   /* Standard I/O library for printf() */

int main()           /* Main function - program starts here */
{
    float a = 4, b = 2, c;   /* Declare float variables a, b with values and c for result */
                              /* float is used instead of int to handle decimal results */

    printf("The value of A = %.2f\n", a);    /* Print value of a upto 2 decimal places */
    printf("The value of B = %.2f\n", b);    /* Print value of b upto 2 decimal places */

    c = a / b;                               /* Divide a by b, store result in c */

    printf("%.2f / %.2f = %.2f\n", a, b, c); /* Print division result */
    printf("The value of C = %.2f\n", c);    /* Print value of c upto 2 decimal places */

    return 0;   /* Return 0 = program executed successfully */
}
