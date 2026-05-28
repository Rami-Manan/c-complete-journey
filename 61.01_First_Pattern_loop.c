#include <stdio.h>   /* Standard I/O library for printf() */

int main()
{
    /* Outer loop: controls the number of rows (5 down to 1) */
    for (int i = 5; i >= 1; i--)
    {
        /* Inner loop: prints numbers from i down to 1 in each row */
        for (int j = i; j >= 1; j--)
        {
            printf("%d ", j);   /* Print current number followed by a space */
        }

        printf("\n");   /* Move to next line after each row is printed */
    }

    return 0;   /* Program executed successfully */
}
