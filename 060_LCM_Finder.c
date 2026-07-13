#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()
{
    int a, b, max;   /* a, b = input numbers | max = larger of the two */

    /* Take two numbers as input from user */
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    /* Input validation - avoid division by zero */
    if (a <= 0 || b <= 0) {
        printf("Error: Please enter positive numbers only.\n");
        return 1;   /* Return 1 = program ended with an error */
    }

    /* Start checking from the larger number (LCM can't be smaller than max) */
    max = (a > b) ? a : b;

    /* Loop until we find the first number divisible by both a and b */
    for (int i = max; ; i++) {
        if (i % a == 0 && i % b == 0) {
            printf("LCM of %d and %d = %d\n", a, b, i);   /* Print result */
            break;   /* Exit loop once LCM is found */
        }
    }

    return 0;   /* Return 0 = program ran successfully */
}
