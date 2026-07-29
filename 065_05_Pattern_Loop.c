#include <stdio.h>   /* Standard I/O library for printf() */

int main()           /* Main function - entry point of the program */
{
    /* Outer loop: controls the number of rows (starts from 5, goes down to 1) */
    for(int i = 5; i >= 1; i--)
    {
        /* Inner loop: prints numbers from 1 to i in each row. */
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", j);   /* Print current number followed by a space */
        }

        printf("\n");   /* Move to the next line after each row is printed */
    }

    return 0;   /* Return 0 = program executed successfully */
}
