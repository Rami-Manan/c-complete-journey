#include <stdio.h>    /* Standard I/O library for printf() */

int main()            /* Main function - execution starts here */
{
    int i = 1;        /* Initialize counter to 1 (first odd number) */

    while(i <= 10)    /* Loop runs as long as i is less than or equal to 10 */
    {
        printf("%d\n", i);   /* Print current value of i, \n moves to next line. */
        i += 2;              /* Increment i by 2 to get next odd number (1,3,5,7,9) */
    }

    return 0;         /* Return 0 = program executed successfully */
}
