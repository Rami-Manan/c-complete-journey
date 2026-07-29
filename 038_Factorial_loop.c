#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()
{
    int n;          /* Variable to store the user's input number. */
    int i = 1;      /* Loop counter, starts from 1 */
    int fact = 1;   /* Stores the factorial result, initialized to 1 (not 0!) */

    /* Take input from user */
    printf("Enter a number: ");
    scanf("%d", &n);   /* Read integer input and store it in n */
 
/* Calculate factorial using while loop */
    while (i <= n)
    {
        fact = fact * i;   /* Multiply current result with counter */
        i++;               /* Increment counter by 1 */
    }

    /* Display the result */
    printf("Factorial of %d = %d", n, fact);

    return 0;   /* Program executed successfully */
}
