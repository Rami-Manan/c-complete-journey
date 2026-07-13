#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()
{
    int i = 1;   /* Start from 1 (first odd number) */
    int n;       /* Variable to store the user's limit */

    printf("Enter limit: ");
    scanf("%d", &n);   /* Read the limit from user input */

    /* Edge case: if user enters 0 or negative, print a warning */
    if (n < 1)
    {
        printf("Please enter a positive number!\n");
        return 1;   /* Return 1 = abnormal exit due to bad input */
    }

    printf("Odd numbers from 1 to %d:\n", n);

    /* do-while loop runs at least once, prints odd numbers up to n */
    do {
        printf("%d ", i);   /* Print current odd number */
        i += 2;             /* Jump to next odd number (+2 skips even numbers) */
    } while (i <= n);       /* Keep looping as long as i doesn't exceed limit */

    printf("\n");   /* New line after all numbers are printed */

    return 0;   /* Return 0 = program executed successfully */
}
