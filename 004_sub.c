#include <stdio.h>   /* Standard I/O library for printf() */

int main()           /* Main function - program starts here */
{
    int a = 30, b = 20, c;   /* Declare integers a, b with values and c for result */

    printf("The value of A = %d\n", a);   /* Print value of a */
    printf("The value of B = %d\n", b);   /* Print value of b */

    c = a - b;                            /* Subtract b from a, store result in c */

    printf("%d - %d = %d\n", a, b, c);   /* Print subtraction result dynamically. */
    printf("The value of C = %d\n", c);  /* Print value of c */

    return 0;   /* Return 0 = program executed successfully */
}
