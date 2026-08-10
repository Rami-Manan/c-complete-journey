/*
 * Program     : Number Systems - All Conversions in One
 * Description : Covers all number system conversions:
 *               → Decimal  to Binary, Octal, Hexadecimal
 *               → Binary   to Decimal
 *               → Octal    to Decimal
 *               → Hex      to Decimal
 *               → Binary   to Octal
 *               → Binary   to Hex
 *               Also covers:
 *               → Bitwise operations (AND, OR, XOR, NOT, shifts)
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

/* ════════════════════════════════════════
   DECIMAL TO BINARY
   Repeatedly divide by 2, collect remainders
   Read remainders bottom to top = binary
   Example: 13 → 1101
   ════════════════════════════════════════ */
void decToBinary(int n)
{
    int binary[32], i = 0, j;

    if(n == 0) { printf("0"); return; }

    while(n > 0)
    {
        binary[i++] = n % 2;   /* Store remainder (0 or 1) */
        n /= 2;
    }

    /* Print in reverse (MSB first) */
    for(j = i-1; j >= 0; j--)
        printf("%d", binary[j]);
}

/* ════════════════════════════════════════
   DECIMAL TO OCTAL
   Repeatedly divide by 8, collect remainders
   Example: 255 → 377
   ════════════════════════════════════════ */
void decToOctal(int n)
{
    int octal[20], i = 0, j;

    if(n == 0) { printf("0"); return; }

    while(n > 0)
    {
        octal[i++] = n % 8;   /* Remainder 0-7 */
        n /= 8;
    }

    for(j = i-1; j >= 0; j--)
        printf("%d", octal[j]);
}

/* ════════════════════════════════════════
   DECIMAL TO HEXADECIMAL
   Repeatedly divide by 16, collect remainders
   10→A, 11→B, 12→C, 13→D, 14→E, 15→F
   Example: 255 → FF
   ════════════════════════════════════════ */
void decToHex(int n)
{
    char hex[20];
    char digits[] = "0123456789ABCDEF";
    int  i = 0, j;

    if(n == 0) { printf("0"); return; }

    while(n > 0)
    {
        hex[i++] = digits[n % 16];   /* Map 0-15 to char */
        n /= 16;
    }

    for(j = i-1; j >= 0; j--)
        printf("%c", hex[j]);
}

/* ════════════════════════════════════════
   BINARY TO DECIMAL
   Multiply each bit by its positional value (power of 2)
   Example: 1101 → 8+4+0+1 = 13
   ════════════════════════════════════════ */
int binaryToDec(long long binary)
{
    int decimal = 0, i = 0, remainder;

    while(binary != 0)
    {
        remainder = binary % 10;       /* Extract rightmost bit */
        decimal  += remainder * pow(2, i);  /* Multiply by 2^i */
        binary   /= 10;
        i++;
    }
    return decimal;
}

/* ════════════════════════════════════════
   OCTAL TO DECIMAL
   Multiply each digit by its positional value (power of 8)
   Example: 377 → 3×64 + 7×8 + 7 = 255
   ════════════════════════════════════════ */
int octalToDec(int octal)
{
    int decimal = 0, i = 0, remainder;

    while(octal != 0)
    {
        remainder = octal % 10;
        decimal  += remainder * pow(8, i);
        octal    /= 10;
        i++;
    }
    return decimal;
}

/* ════════════════════════════════════════
   HEX TO DECIMAL
   Convert each hex char to value, multiply by 16^position
   Example: FF → 15×16 + 15 = 255
   ════════════════════════════════════════ */
int hexToDec(char hex[])
{
    int decimal = 0, i, len, val;

    len = strlen(hex);

    for(i = 0; i < len; i++)
    {
        char c = hex[i];

        /* Convert char to numeric value */
        if(c >= '0' && c <= '9') val = c - '0';
        else if(c>='A'&&c<='F') val = c - 'A' + 10;
        else if(c>='a'&&c<='f') val = c - 'a' + 10;
        else { printf("Invalid hex!\n"); return -1; }

        decimal += val * pow(16, len-1-i);
    }

    return decimal;
}

/* ════════════════════════════════════════
   BINARY TO OCTAL
   Group binary digits in sets of 3 from right
   Convert each group to octal digit (0-7)
   Example: 110 101 → 6 5 → 65
   ════════════════════════════════════════ */
void binaryToOctal(long long binary)
{
    /* Convert binary → decimal → octal */
    int decimal = binaryToDec(binary);
    decToOctal(decimal);
}

/* ════════════════════════════════════════
   BINARY TO HEX
   Group binary digits in sets of 4 from right
   Convert each group to hex digit (0-F)
   Example: 1111 1111 → FF
   ════════════════════════════════════════ */
void binaryToHex(long long binary)
{
    /* Convert binary → decimal → hex */
    int decimal = binaryToDec(binary);
    decToHex(decimal);
}

/* ════════════════════════════════════════
   BITWISE OPERATIONS
   Work directly on binary bits
   AND (&)  : 1 only if both bits are 1
   OR  (|)  : 1 if either bit is 1
   XOR (^)  : 1 if bits are different
   NOT (~)  : flips all bits
   Left shift  (<<) : multiply by 2
   Right shift (>>) : divide by 2
   ════════════════════════════════════════ */
void bitwiseOps(int a, int b)
{
    printf("\n── Bitwise Operations (a=%d, b=%d) ──\n", a, b);
    printf("a & b  (AND)         : %d\n",  a & b);
    printf("a | b  (OR)          : %d\n",  a | b);
    printf("a ^ b  (XOR)         : %d\n",  a ^ b);
    printf("~a     (NOT)         : %d\n",  ~a);
    printf("a << 1 (Left shift)  : %d  (= a × 2)\n", a << 1);
    printf("a >> 1 (Right shift) : %d  (= a ÷ 2)\n", a >> 1);
}

int main()
{
    int decimal = 255;
    long long binary = 11111111;   /* Binary representation of 255 */
    int octal  = 377;              /* Octal representation of 255 */
    char hex[] = "FF";             /* Hex representation of 255 */

    printf("========== NUMBER SYSTEMS ==========\n\n");
    printf("Working with decimal value: %d\n\n", decimal);

    /* Decimal to others */
    printf("── Decimal to Others ──\n");
    printf("%d in Binary : ", decimal); decToBinary(decimal); printf("\n");
    printf("%d in Octal  : ", decimal); decToOctal(decimal);  printf("\n");
    printf("%d in Hex    : ", decimal); decToHex(decimal);    printf("\n");

    /* Others to Decimal */
    printf("\n── Others to Decimal ──\n");
    printf("Binary %lld  → Decimal : %d\n", binary, binaryToDec(binary));
    printf("Octal  %d    → Decimal : %d\n", octal,  octalToDec(octal));
    printf("Hex    %s    → Decimal : %d\n", hex,    hexToDec(hex));

    /* Binary to Octal and Hex */
    printf("\n── Binary to Others ──\n");
    printf("Binary %lld → Octal : ", binary); binaryToOctal(binary); printf("\n");
    printf("Binary %lld → Hex   : ", binary); binaryToHex(binary);   printf("\n");

    /* Bitwise operations */
    bitwiseOps(12, 10);

    printf("\n── Number System Summary ──\n");
    printf("Binary      : Base 2  (digits: 0,1)\n");
    printf("Octal       : Base 8  (digits: 0-7)\n");
    printf("Decimal     : Base 10 (digits: 0-9)\n");
    printf("Hexadecimal : Base 16 (digits: 0-9, A-F)\n");

    return 0;
}
