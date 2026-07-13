#include <stdio.h>   /* Standard I/O library for printf() */

int main()           /* Main function - program starts here */
{
    int i = 0;       /* Initialize counter variable to 0 */

    while(i <= 10)   /* Loop runs as long as i is less than or equal to 10 */
    {
        printf("%d\n", i);   /* Print current value of i, \n for new line */
        i += 2;              /* Increment i by 2 to get next even number */
    }

    return 0;   /* Return 0 = program executed successfully */
}
