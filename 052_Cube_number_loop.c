#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program starts here */
{
    int n;           /* Variable to store the limit entered by user */

    /* Ask user to enter the limit. */
    printf("Enter limit: ");
    scanf("%d", &n);   /* Read integer input and store in n */

    /* Loop from 1 to n and print cube of each number */
    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", i * i * i);   /* Calculate and print cube of i, \t for neat spacing */
    }

    printf("\n");   /* Move to next line after all cubes are printed */

    return 0;   /* Return 0 = program executed successfully */
}
