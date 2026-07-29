#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program execution starts here */
{
    int a, b, c;   /* Declare three integer variables to store user input */

    scanf("%d %d %d", &a, &b, &c);   /* Read three integers from the user. */

    if(a >= b && a >= c)             /* Check if 'a' is greater than or equal to both 'b' and 'c' */
        printf("A is largest");      /* Print message if 'a' is the largest */
    else if(b >= a && b >= c)        /* Otherwise, check if 'b' is greater than or equal to both 'a' and 'c' */
        printf("B is largest");      /* Print message if 'b' is the largest */
    else                             /* If neither 'a' nor 'b' is the largest, then 'c' must be */
        printf("C is largest");      /* Print message if 'c' is the largest */

    return 0;   /* Return 0 = program executed successfully */
}
