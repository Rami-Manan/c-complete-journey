#include <stdio.h>   /* Standard I/O library for printf() */

int main()           /* Main function - program starts here */
{
    int a = 8, b = 7, c;   /* Declare integers a, b with values and c for result. */

    printf("The value of A = %d\n", a);    /* Print value of a */
    printf("The value of B = %d\n", b);    /* Print value of b */

    c = a * b;                             /* Multiply a and b, store result in c */

    printf("%d * %d = %d\n", a, b, c);    /* Print multiplication result */
    printf("The value of C = %d\n", c);   /* Print value of c */

    return 0;   /* Return 0 = program executed successfully */
}
