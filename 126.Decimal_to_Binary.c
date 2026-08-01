/*
 * Program     : Decimal to Binary Conversion
 * Description : Converts a decimal number to binary
 *               Method: Repeatedly divide by 2, collect remainders
 *               Read remainders from bottom to top = binary number
 *               Example: 13 ÷ 2 → remainders: 1,0,1,1 → Binary: 1101
 */

#include <stdio.h>

/* Convert decimal to binary */
void decToBinary(int n)
{
    int binary[32];   /* Store binary digits */
    int i = 0, j;

    if(n == 0)        /* Special case: 0 in binary is 0 */
    {
        printf("Binary: 0\n");
        return;
    }

    /* Divide by 2 and store remainders */
    while(n > 0)
    {
        binary[i++] = n % 2;   /* Remainder is 0 or 1 */
        n /= 2;                /* Divide by 2 */
    }

    /* Print remainders in reverse (MSB first) */
    printf("Binary: ");
    for(j = i-1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
}

int main()
{
    int n;

    printf("========== DECIMAL TO BINARY ==========\n\n");

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    printf("\nStep by Step:\n");

    /* Show division steps */
    int temp = n;
    printf("%-10s %-10s %-10s\n", "Number", "÷2", "Remainder");
    printf("------------------------------\n");
    while(temp > 0)
    {
        printf("%-10d %-10d %-10d\n", temp, temp/2, temp%2);
        temp /= 2;
    }

    printf("\nRead remainders bottom to top:\n");
    decToBinary(n);

    printf("\n── Quick Reference ──\n");
    printf("Decimal  Binary\n");
    printf("0      → 0\n");
    printf("1      → 1\n");
    printf("2      → 10\n");
    printf("4      → 100\n");
    printf("8      → 1000\n");
    printf("16     → 10000\n");

    return 0;
}
