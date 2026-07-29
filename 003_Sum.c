#include <stdio.h>   /* Standard I/O library for printf() */

int main()           /* Main function - program starts here */
{
    int a = 20, b = 45, c;   /* Declare two integers a, b with values and c for result */

    printf("a = %d\n", a);   /* Print value of a (removed & operator - it was wrong here) */
    printf("b = %d\n", b);   /* Print value of b (removed & operator - it was wrong here) */

    c = a + b;               /* Add a and b, store result in c */

    printf("Sum = %d\n", c); /* Print the result of addition. */

    return 0;   /* Return 0 = program executed successfully */
}
