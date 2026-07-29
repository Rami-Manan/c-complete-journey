#include <stdio.h>   /* Standard I/O library for printf() */

int main()           /* Main function - entry point of the program */
{
    int i = 0;       /* Initialize loop counter to 0 */

    while(i <= 10)   /* Loop runs as long as i is less than or equal to 10 */
    {
        printf("%d\n", i);   /* Print value of variable i, \n for new line. */
        i++;                 /* Increment i by 1, prevents infinite loop */
    }

    return 0;   /* Return 0 = program executed successfully */
}
