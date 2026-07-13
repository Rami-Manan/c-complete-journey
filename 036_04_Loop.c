#include <stdio.h>   /* Standard I/O library for printf() */

int main()           /* Main function - entry point of the program */
{
    int i = 1;       /* Initialize loop counter to 1 */

    while (i <= 10)  /* Loop runs as long as i is less than or equal to 10 */
    {
        printf("%d\n", i * i);  /* Print square of i, \n moves to next line */
        i++;                    /* Increment i by 1 after each iteration */
    }

    return 0;        /* Return 0 = program executed successfully */
}
