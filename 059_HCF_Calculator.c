#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()
{
    int a, b, hcf = 1;   /* Declare two numbers and hcf, initialized to 1 */

    /* Take input from the user */
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);   /* Read two integers from keyboard */

    /* Loop from 1 to the smaller of the two numbers */
    for (int i = 1; i <= a && i <= b; i++)
    {
        /* If i divides both a and b evenly, it's a common factor */
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;   /* Update hcf — last valid i will be the highest. */
        }
    }

    /* Display the result */
    printf("HCF of %d and %d = %d\n", a, b, hcf);   /* Added \n and both numbers for clarity */

    return 0;   /* Program executed successfully */
}
