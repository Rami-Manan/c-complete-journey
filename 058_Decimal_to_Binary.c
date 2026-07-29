#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()
{
    int n, binary[32], i = 0;   /* n = input number, binary[] = stores remainders, i = index */

    /* Get decimal number from user */
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    /* Handle edge case: if user enters 0 */
    if (n == 0) {
        printf("Binary = 0\n");
        return 0;
    }

    /* Handle negative numbers */
    if (n < 0) {
        printf("Please enter a positive number.\n");
        return 1;   /* Return 1 = program exited due to an error. */
    }

    /* Repeatedly divide by 2 and store remainders (LSB to MSB) */
    for (; n > 0; i++) {
        binary[i] = n % 2;   /* Store remainder (0 or 1) */
        n = n / 2;            /* Divide number by 2 */
    }

    /* Print binary digits in reverse order (MSB to LSB) */
    printf("Binary = ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");   /* Move to next line after output */

    return 0;   /* Program executed successfully */
}
