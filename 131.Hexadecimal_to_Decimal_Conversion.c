/*
 * Program     : Hexadecimal to Decimal Conversion
 * Description : Converts hexadecimal number to decimal
 *               Method: Multiply each hex digit by its positional value (16^position)
 *               A=10, B=11, C=12, D=13, E=14, F=15
 *               Example: FF → 15×16 + 15×1 = 255
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

/* Convert hex character to its decimal value */
int hexCharToVal(char c)
{
    if(c >= '0' && c <= '9') return c - '0';        /* '0'-'9' → 0-9 */
    if(c >= 'A' && c <= 'F') return c - 'A' + 10;  /* 'A'-'F' → 10-15 */
    if(c >= 'a' && c <= 'f') return c - 'a' + 10;  /* 'a'-'f' → 10-15 */
    return -1;   /* Invalid character */
}

/* Convert hexadecimal string to decimal */
int hexToDecimal(char hex[])
{
    int decimal = 0;
    int len     = strlen(hex);
    int i;

    for(i = 0; i < len; i++)
    {
        int val = hexCharToVal(hex[i]);
        if(val == -1) { printf("Invalid hex digit: %c\n", hex[i]); return -1; }

        /* Multiply digit value by 16^position (position from right) */
        decimal += val * (int)pow(16, len - 1 - i);
    }

    return decimal;
}

int main()
{
    char hex[20];

    printf("========== HEXADECIMAL TO DECIMAL ==========\n\n");

    printf("Enter a hexadecimal number (e.g. FF, 1A3): ");
    scanf("%s", hex);

    int len = strlen(hex);

    printf("\nStep by Step:\n");
    printf("%-10s %-10s %-10s %-10s %-10s\n",
           "Char", "Value", "Position", "16^pos", "Result");
    printf("----------------------------------------------------\n");

    int total = 0, i;
    for(i = 0; i < len; i++)
    {
        int val  = hexCharToVal(hex[i]);
        int pos  = len - 1 - i;
        int pval = (int)pow(16, pos);
        int res  = val * pval;
        printf("%-10c %-10d %-10d %-10d %-10d\n",
               hex[i], val, pos, pval, res);
        total += res;
    }

    printf("----------------------------------------------------\n");
    printf("Total = %d\n", total);

    printf("\nHexadecimal %s → Decimal: %d\n", hex, hexToDecimal(hex));

    printf("\n── Hex Digit Values ──\n");
    printf("A=10  B=11  C=12  D=13  E=14  F=15\n");

    printf("\n── Quick Reference ──\n");
    printf("Hex      Decimal\n");
    printf("A      → 10\n");
    printf("F      → 15\n");
    printf("10     → 16\n");
    printf("FF     → 255\n");
    printf("100    → 256\n");

    return 0;
}
