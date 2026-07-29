#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program execution starts here */
{
    int a, b;   /* Declare two integer variables to store user input. */

    scanf("%d %d", &a, &b);   /* Read two integers from the user */

    if(a > b)                 /* Check if 'a' is greater than 'b' */
        printf("A is greater");   /* Print message if condition is true */
    else
        printf("B is greater");   /* Print message if condition is false */

    return 0;   /* Return 0 = program executed successfully */
}
