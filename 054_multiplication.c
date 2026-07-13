#include <stdio.h>   /* Standard I/O library for printf() */

int main()           /* Main function - program starts here */
{
    /* Outer loop: controls which table to print (1 to 5) */
    for (int i = 1; i <= 5; i++)
    {
        printf("\nTable of %d\n", i);   /* Print table heading for current number */

        /* Inner loop: prints each row of the table (1 to 10) */
        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);   /* Print: i x j = result */
        }
    }

    return 0;   /* Return 0 = program executed successfully */
}
