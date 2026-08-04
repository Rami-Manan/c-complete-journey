/*
 * Program     : Binary to Decimal Conversion
 * Description : Converts binary number to decimal
 *               Method: Multiply each bit by its positional value (2^position)
 *               Position starts from 0 at rightmost bit
 *               Example: 1101 → 1×8 + 1×4 + 0×2 + 1×1 = 13
 */

#include <stdio.h>
#include <math.h>

/* Convert binary to decimal */
int binaryToDecimal(long long binary)
{
    int decimal   = 0;
    int position  = 0;   /* Rightmost bit = position 0 */
    int remainder;

    while(binary != 0)
    {
        remainder  = binary % 10;           /* Extract rightmost bit */
        decimal   += remainder * pow(2, position);  /* Multiply by 2^position */
        binary    /= 10;                    /* Remove rightmost bit */
        position++;                         /* Move to next position */
    }

    return decimal;
}

int main()
{
    long long binary;

    printf("========== BINARY TO DECIMAL ==========\n\n");

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    printf("\nStep by Step:\n");

    /* Show multiplication steps */
    long long temp = binary;
    int pos = 0;
    int bits[64], i = 0, j;

    /* Store bits */
    while(temp != 0)
    {
        bits[i++] = temp % 10;
        temp /= 10;
    }

    printf("%-10s %-10s %-10s %-10s\n", "Bit", "Position", "2^pos", "Value");
    printf("------------------------------------------\n");

    int total = 0;
    for(j = 0; j < i; j++)
    {
        int val = bits[j] * (int)pow(2, j);
        printf("%-10d %-10d %-10d %-10d\n", bits[j], j, (int)pow(2,j), val);
        total += val;
    }

    printf("------------------------------------------\n");
    printf("Total = %d\n", total);

    printf("\nBinary %lld → Decimal: %d\n", binary, binaryToDecimal(binary));

    printf("\n── Quick Reference ──\n");
    printf("Binary   Decimal\n");
    printf("0001   → 1\n");
    printf("0010   → 2\n");
    printf("0100   → 4\n");
    printf("1000   → 8\n");
    printf("1111   → 15\n");

    return 0;
}
