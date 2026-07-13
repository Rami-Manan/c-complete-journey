#include <stdio.h>   /* Standard I/O library for printf() */

int main()           /* Main function - program starts here */
{
    int n = 1234;    /* The number whose digits we want to add */
    int sum = 0;     /* Variable to store the running sum of digits */

    /* Loop runs until all digits are extracted (n becomes 0) */
    while (n != 0)
    {
        sum = sum + (n % 10);  /* Extract last digit using modulus and add to sum */
        n = n / 10;            /* Remove last digit by dividing n by 10 */
    }

    printf("Sum of digits = %d", sum);  /* Print the final sum */

    return 0;   /* Return 0 = program executed successfully */
}
