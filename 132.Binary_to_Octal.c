/*
 * Program     : Binary to Octal Conversion
 * Description : Converts binary number to octal
 *               Method: Group binary digits into sets of 3 from right
 *               Each group of 3 bits = one octal digit (0-7)
 *               Example: 110 101 → 6 5 → Octal: 65
 *               Shortcut: Binary → Decimal → Octal
 */

#include <stdio.h>
#include <math.h>

/* Binary to Decimal (helper) */
int binaryToDecimal(long long binary)
{
    int decimal = 0, pos = 0;
    while(binary != 0)
    {
        decimal += (binary % 10) * pow(2, pos++);
        binary  /= 10;
    }
    return decimal;
}

/* Decimal to Octal (helper) */
void decimalToOctal(int n)
{
    int octal[20], i = 0, j;
    while(n > 0) { octal[i++] = n%8; n/=8; }
    for(j = i-1; j >= 0; j--) printf("%d", octal[j]);
}

/* Show grouping of binary into 3-bit groups */
void showGrouping(long long binary)
{
    /* Store all bits */
    int bits[64], i = 0, j;
    long long temp = binary;

    while(temp != 0) { bits[i++] = temp % 10; temp /= 10; }

    /* Pad to make total bits divisible by 3 */
    while(i % 3 != 0) bits[i++] = 0;

    printf("3-bit Groups (right to left):\n");
    for(j = i-1; j >= 0; j -= 3)
    {
        /* Each group of 3 bits */
        int val = bits[j]*4 + bits[j-1]*2 + bits[j-2]*1;
        printf("  [%d%d%d] = %d\n", bits[j], bits[j-1], bits[j-2], val);
    }
}

int main()
{
    long long binary;

    printf("========== BINARY TO OCTAL ==========\n\n");

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    printf("\nMethod: Group bits into sets of 3 from right\n\n");
    showGrouping(binary);

    int decimal = binaryToDecimal(binary);
    printf("\nBinary %lld → Decimal %d → Octal: ", binary, decimal);
    decimalToOctal(decimal);
    printf("\n");

    printf("\n── Quick Reference ──\n");
    printf("Binary   Octal\n");
    printf("000    → 0\n");
    printf("001    → 1\n");
    printf("010    → 2\n");
    printf("011    → 3\n");
    printf("100    → 4\n");
    printf("101    → 5\n");
    printf("110    → 6\n");
    printf("111    → 7\n");

    return 0;
}
