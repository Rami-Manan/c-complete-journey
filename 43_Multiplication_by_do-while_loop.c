#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()
{
    int n, i = 1;   /* n = number entered by user, i = loop counter starting from 1 */

    /* Ask user to enter a number */
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &n);   /* Read integer input from user and store in n */

    printf("\n--- Multiplication Table of %d ---\n", n);   /* Print table heading */

    do {
        /* Print each row of the multiplication table */
        printf("%d x %d = %d\n", n, i, n * i);
        i++;   /* Increment counter by 1 after each iteration */

    } while (i <= 10);   /* Keep looping until i exceeds 10 */

    return 0;   /* Return 0 = program executed successfully */
}
