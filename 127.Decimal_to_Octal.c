/*
 * Program     : Decimal to Octal Conversion
 * Description : Converts a decimal number to octal (base 8)
 *               Method: Repeatedly divide by 8, collect remainders
 *               Digits used: 0 to 7 only
 *               Example: 255 ÷ 8 → remainders: 7,7,3 → Octal: 377
 */

#include <stdio.h>

/* Convert decimal to octal */
void decToOctal(int n)
{
    int octal[20];   /* Store octal digits */
    int i = 0, j;

    if(n == 0)
    {
        printf("Octal: 0\n");
        return;
    }

    /* Divide by 8 and store remainders */
    while(n > 0)
    {
        octal[i++] = n % 8;   /* Remainder is 0-7 */
        n /= 8;
    }

    /* Print in reverse */
    printf("Octal: ");
    for(j = i-1; j >= 0; j--)
        printf("%d", octal[j]);
    printf("\n");
}

int main()
{
    int n;

    printf("========== DECIMAL TO OCTAL ==========\n\n");

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    printf("\nStep by Step:\n");

    /* Show division steps */
    int temp = n;
    printf("%-10s %-10s %-10s\n", "Number", "÷8", "Remainder");
    printf("------------------------------\n");
    while(temp > 0)
    {
        printf("%-10d %-10d %-10d\n", temp, temp/8, temp%8);
        temp /= 8;
    }

    printf("\nRead remainders bottom to top:\n");
    decToOctal(n);

    printf("\n── Quick Reference ──\n");
    printf("Decimal  Octal\n");
    printf("7      → 7\n");
    printf("8      → 10\n");
    printf("64     → 100\n");
    printf("255    → 377\n");
    printf("512    → 1000\n");

    return 0;
}
