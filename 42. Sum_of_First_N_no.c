#include <stdio.h>   /* Standard I/O library for printf() */

int main()           /* Main function - program starts here */
{
    int n = 5;       /* Upper limit - sum will be calculated up to this number */
    int i = 1;       /* Loop counter - starts from 1 */
    int sum = 0;     /* Stores the running total, initialized to 0 */

    do               /* do-while executes the block at least once before checking condition */
    {
        sum += i;    /* Add current value of i to sum (same as sum = sum + i) */
        i++;         /* Increment i by 1 for next iteration */
    } while (i <= n); /* Keep looping as long as i is less than or equal to n */

    printf("Sum = %d", sum);  /* Print the final sum (%d is format specifier for integers) */

    return 0;   /* Return 0 = program executed successfully */
}
