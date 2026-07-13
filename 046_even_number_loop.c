/*
 * Program    : Even Numbers Printer
 * Author     : Manan Rami
 * Description: Prints all even numbers from 2 up to a user-entered limit
 */

#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program starts here */
{
    int i = 2;       /* Start from 2, the first even number */
    int n;           /* Variable to store the user's limit */

    printf("Enter limit: ");   /* Ask user to enter the limit */
    scanf("%d", &n);           /* Read and store the limit in n */

    /* Check if limit is valid (must be >= 2 for any even number to print) */
    if (n < 2) {
        printf("No even numbers to display. Please enter a number >= 2.\n");
        return 1;   /* Return 1 = program ended with an issue */
    }

    printf("Even numbers from 2 to %d:\n", n);   /* Print heading */

    do {
        printf("%d ", i);   /* Print current even number */
        i += 2;             /* Jump to next even number */
    } while (i <= n);       /* Keep looping until i exceeds the limit */

    printf("\n");   /* Move to next line after all numbers are printed */

    return 0;   /* Return 0 = program ran successfully */
}
