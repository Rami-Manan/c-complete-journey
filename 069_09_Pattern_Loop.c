#include <stdio.h>   /* Standard I/O library for printf() */

int main()
{
    int i, j;   /* i = row counter, j = column counter */

    /* -------- Upper half of the diamond (rows 1 to 5) -------- */
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)   /* Print i stars in each row. */
        {
            printf("* ");
        }
        printf("\n");   /* Move to next line after each row */
    }

    /* -------- Lower half of the diamond (rows 4 to 1) -------- */
    for(i = 4; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)   /* Print i stars in decreasing order */
        {
            printf("* ");
        }
        printf("\n");   /* Move to next line after each row */
    }

    return 0;   /* Program executed successfully */
}
