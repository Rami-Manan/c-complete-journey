/*
 * Program     : Octal to Decimal Conversion
 * Description : Converts octal number to decimal
 *               Method: Multiply each digit by its positional value (8^position)
 *               Position starts from 0 at rightmost digit
 *               Example: 377 → 3×64 + 7×8 + 7×1 = 255
 */

#include <stdio.h>
#include <math.h>

/* Convert octal to decimal */
int octalToDecimal(int octal)
{
    int decimal  = 0;
    int position = 0;   /* Rightmost digit = position 0 */
    int remainder;

    while(octal != 0)
    {
        remainder  = octal % 10;              /* Extract rightmost digit */
        decimal   += remainder * pow(8, position);  /* Multiply by 8^position */
        octal     /= 10;                      /* Remove rightmost digit */
        position++;
    }

    return decimal;
}

int main()
{
    int octal;

    printf("========== OCTAL TO DECIMAL ==========\n\n");

    printf("Enter an octal number: ");
    scanf("%d", &octal);

    /* Validate octal — digits must be 0-7 only */
    int temp = octal, valid = 1;
    while(temp != 0)
    {
        if(temp % 10 >= 8)   /* Invalid octal digit */
        {
            valid = 0;
            break;
        }
        temp /= 10;
    }

    if(!valid)
    {
        printf("Invalid octal number! Digits must be 0-7 only.\n");
        return 1;
    }

    printf("\nStep by Step:\n");

    /* Show multiplication steps */
    temp = octal;
    int pos = 0;
    int digits[20], i = 0, j;

    while(temp != 0)
    {
        digits[i++] = temp % 10;
        temp /= 10;
    }

    printf("%-10s %-10s %-10s %-10s\n", "Digit", "Position", "8^pos", "Value");
    printf("------------------------------------------\n");

    int total = 0;
    for(j = 0; j < i; j++)
    {
        int val = digits[j] * (int)pow(8, j);
        printf("%-10d %-10d %-10d %-10d\n", digits[j], j, (int)pow(8,j), val);
        total += val;
    }

    printf("------------------------------------------\n");
    printf("Total = %d\n", total);

    printf("\nOctal %d → Decimal: %d\n", octal, octalToDecimal(octal));

    printf("\n── Quick Reference ──\n");
    printf("Octal    Decimal\n");
    printf("7      → 7\n");
    printf("10     → 8\n");
    printf("17     → 15\n");
    printf("100    → 64\n");
    printf("377    → 255\n");

    return 0;
}
