#include <stdio.h>  /* Standard I/O library for printf() */

int main()
{
    int i, j;  /* Loop counters: i for rows, j for columns */

    /* Outer loop: controls rows, counts down from 5 to 1 */
    for (i = 5; i >= 1; i--)
    {
         printf(". ");  /* Print a dot with space */
         
        /* Inner loop 1: prints dots equal to current row number. */
        for (j = 1; j <= i; j++)
        {
             printf("* ");  /* Print a star with space */
        }
        
        printf("\n");  /* Move to next line after each row */
    }

    return 0;  /* Program executed successfully */
}
