/*
 * Program     : Decimal to Hexadecimal Conversion
 * Description : Converts decimal number to hexadecimal (base 16)
 *               Method: Repeatedly divide by 16, collect remainders
 *               Digits: 0-9 for values 0-9, A-F for values 10-15
 *               Example: 255 → FF
 *               10→A, 11→B, 12→C, 13→D, 14→E, 15→F
 */

#include <stdio.h>

/* Convert decimal to hexadecimal */
void decToHex(int n)
{
    char hex[20];
    char digits[] = "0123456789ABCDEF";   /* Map 0-15 to hex chars */
    int  i = 0, j;

    if(n == 0)
    {
        printf("Hexadecimal: 0\n");
        return;
    }

    /* Divide by 16 and store remainders */
    while(n > 0)
    {
        hex[i++] = digits[n % 16];   /* Map remainder to hex char */
        n /= 16;
    }

    /* Print in reverse */
    printf("Hexadecimal: ");
    for(j = i-1; j >= 0; j--)
        printf("%c", hex[j]);
    printf("\n");
}

int main()
{
    int n;

    printf("========== DECIMAL TO HEXADECIMAL ==========\n\n");

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    printf("\nStep by Step:\n");

    /* Show division steps */
    int temp = n;
    char digits[] = "0123456789ABCDEF";
    printf("%-10s %-10s %-10s %-10s\n", "Number", "÷16", "Remainder", "Hex Digit");
    printf("------------------------------------------\n");
    while(temp > 0)
    {
        printf("%-10d %-10d %-10d %-10c\n",
               temp, temp/16, temp%16, digits[temp%16]);
        temp /= 16;
    }

    printf("\nRead remainders bottom to top:\n");
    decToHex(n);

    printf("\n── Hex Digit Table ──\n");
    printf("Decimal : 10  11  12  13  14  15\n");
    printf("Hex     :  A   B   C   D   E   F\n");

    printf("\n── Quick Reference ──\n");
    printf("Decimal  Hex\n");
    printf("10     → A\n");
    printf("15     → F\n");
    printf("16     → 10\n");
    printf("255    → FF\n");
    printf("256    → 100\n");

    return 0;
}
