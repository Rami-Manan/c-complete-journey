#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program starts here */
{
    int n;           /* Variable to store the starting number entered by user */

    /* Ask user to enter a starting number */
    printf("Enter starting number: ");
    scanf("%d", &n);   /* Read integer input from user and store in n */

    /* Validate input - number should be positive. */
    if (n < 1)
    {
        printf("Please enter a positive number!\n");
        return 1;   /* Return 1 = program ended with an error */
    }

    /* Do-while loop: runs at least once, counts down from n to 1 */
    do
    {
        printf("%d ", n);   /* Print current value of n with a space */
        n--;                /* Decrement n by 1 (n-- is same as n = n - 1) */
    } while (n >= 1);       /* Keep looping as long as n is >= 1 */

    printf("\nDone!\n");    /* Print newline + done message after countdown */

    return 0;   /* Return 0 = program ran successfully */
}
