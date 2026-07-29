#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()
{
    /* Variable declarations */
    int base, exp, result = 1, i = 1;   /* result starts at 1 (identity for multiplication) */

    /* Take input from user */
    printf("Enter base: ");
    scanf("%d", &base);          /* Read base value */

    printf("Enter exponent: ");
    scanf("%d", &exp);           /* Read exponent value. */

    /* Edge case: if exponent is 0, any number^0 = 1 */
    if (exp == 0) {
        printf("Result = 1");    /* Directly print 1, skip loop */
        return 0;
    }

    /* do-while loop runs at least once, multiplies base 'exp' times */
    do {
        result *= base;          /* result = result * base (repeated multiplication) */
        i++;                     /* Increment counter */
    } while (i <= exp);          /* Keep looping until i exceeds exponent */

    /* Display final result */
    printf("Result = %d", result);   /* Print base^exp */

    return 0;   /* Program executed successfully */
}
