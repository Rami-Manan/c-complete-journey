#include <stdio.h>   /* Standard I/O library for printf() */

int main()
{
    /* Loop control variables and starting number */
    int i, j, num = 15;

    /* Outer loop: controls the number of rows (5 down to 1) */
    for(i = 5; i >= 1; i--)
    {
        /* Inner loop: prints 'i' numbers in each row */
        for(j = 1; j <= i; j++)
        {
            printf("%d ", num);   /* Print current number with a space. */
            num--;                /* Decrement number after each print */
        }

        printf("\n");   /* Move to next line after each row */
    }

    return 0;   /* Program executed successfully */
}
