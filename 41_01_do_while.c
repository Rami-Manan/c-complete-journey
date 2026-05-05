#include <stdio.h>   /* Standard I/O library for printf() */

int main()           /* Main function - program starts here */
{
    int i = 1;       /* Initialize counter variable i to 1 */

    do               /* Do-while loop - executes the block FIRST, then checks condition */
    {
        printf("%d ", i);   /* Print current value of i followed by a space */
        i++;                /* Increment i by 1 after each print */

    } while (i <= 10);      /* Keep looping as long as i is less than or equal to 10 */

    printf("\n");    /* Move to next line after all numbers are printed */

    return 0;        /* Return 0 = program executed successfully */
}
