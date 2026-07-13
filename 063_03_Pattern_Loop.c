#include <stdio.h>  /* Standard I/O library for printf() */

int main()
{
    int i, j;  /* i = outer loop (row counter), j = inner loop (column counter) */

    /* Outer loop: starts from 5, decrements down to 1 */
    for(i = 5; i >= 1; i--)
    {
        /* Inner loop: prints the value of i exactly i times in each row */
        for(j = 1; j <= i; j++)
        {
            printf("%d ", i);  /* Print current row number followed by a space */
        }

        printf("\n");  /* Move to next line after each row is complete */
    }

    return 0;  /* Program executed successfully */
}
