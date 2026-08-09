/*
 * Program     : Bitwise Operations
 * Description : Covers all bitwise operators in C:
 *               & (AND)  → 1 only if BOTH bits are 1
 *               | (OR)   → 1 if EITHER bit is 1
 *               ^ (XOR)  → 1 if bits are DIFFERENT
 *               ~ (NOT)  → flips all bits (complement)
 *               << (Left Shift)  → multiply by 2 per shift
 *               >> (Right Shift) → divide by 2 per shift
 *               Real uses: flags, masking, encryption, fast math
 */

#include <stdio.h>

/* Print a number in binary format */
void printBinary(int n)
{
    int i;
    int bits[16];
    int count = 0;

    if(n == 0) { printf("00000000"); return; }

    /* Handle negative numbers using unsigned */
    unsigned int un = (unsigned int)n;

    for(i = 7; i >= 0; i--)
        printf("%d", (un >> i) & 1);   /* Extract each bit using shift */
}

int main()
{
    int a, b;

    printf("========== BITWISE OPERATIONS ==========\n\n");

    printf("Enter first number  (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);

    printf("\na = %d → Binary: ", a); printBinary(a); printf("\n");
    printf("b = %d → Binary: ", b); printBinary(b); printf("\n\n");

    /* ════════════════════════════
       AND (&)
       1 & 1 = 1
       1 & 0 = 0
       0 & 0 = 0
       Use: Check if specific bit is set
       ════════════════════════════ */
    printf("── AND (&) ──\n");
    printf("Rule   : 1 only if BOTH bits are 1\n");
    printf("a & b  = %d → Binary: ", a & b); printBinary(a & b);
    printf("\n\n");

    /* ════════════════════════════
       OR (|)
       1 | 1 = 1
       1 | 0 = 1
       0 | 0 = 0
       Use: Set a specific bit
       ════════════════════════════ */
    printf("── OR (|) ──\n");
    printf("Rule   : 1 if EITHER bit is 1\n");
    printf("a | b  = %d → Binary: ", a | b); printBinary(a | b);
    printf("\n\n");

    /* ════════════════════════════
       XOR (^)
       1 ^ 1 = 0
       1 ^ 0 = 1
       0 ^ 0 = 0
       Use: Toggle a bit, simple encryption
       ════════════════════════════ */
    printf("── XOR (^) ──\n");
    printf("Rule   : 1 if bits are DIFFERENT\n");
    printf("a ^ b  = %d → Binary: ", a ^ b); printBinary(a ^ b);
    printf("\n\n");

    /* ════════════════════════════
       NOT (~)
       Flips every bit
       ~0 = 1, ~1 = 0
       Result = -(n+1) for signed int
       ════════════════════════════ */
    printf("── NOT (~) ──\n");
    printf("Rule   : Flip every bit\n");
    printf("~a     = %d\n", ~a);
    printf("~b     = %d\n\n", ~b);

    /* ════════════════════════════
       LEFT SHIFT (<<)
       Shifts bits left by n positions
       Fills right with 0s
       Each left shift = multiply by 2
       ════════════════════════════ */
    printf("── LEFT SHIFT (<<) ──\n");
    printf("Rule   : Shift bits left, fill right with 0\n");
    printf("a << 1 = %d  (a × 2)\n",   a << 1);
    printf("a << 2 = %d  (a × 4)\n",   a << 2);
    printf("a << 3 = %d  (a × 8)\n\n", a << 3);

    /* ════════════════════════════
       RIGHT SHIFT (>>)
       Shifts bits right by n positions
       Each right shift = divide by 2
       ════════════════════════════ */
    printf("── RIGHT SHIFT (>>) ──\n");
    printf("Rule   : Shift bits right, fill left with 0\n");
    printf("a >> 1 = %d  (a ÷ 2)\n",   a >> 1);
    printf("a >> 2 = %d  (a ÷ 4)\n\n", a >> 2);

    /* ════════════════════════════
       PRACTICAL USES
       ════════════════════════════ */
    printf("── Practical Uses ──\n");

    /* Check if number is even or odd using AND */
    printf("Is a odd?  : %s (using a & 1)\n", (a & 1) ? "Yes" : "No");

    /* Check if specific bit is set */
    printf("Is bit 2 set in a? : %s\n", (a & (1<<2)) ? "Yes" : "No");

    /* Set a specific bit using OR */
    printf("Set bit 1 in a : %d\n",   a | (1<<1));

    /* Clear a specific bit using AND with NOT */
    printf("Clear bit 1 in a : %d\n", a & ~(1<<1));

    /* Toggle a bit using XOR */
    printf("Toggle bit 0 in a : %d\n", a ^ 1);

    /* Swap without temp using XOR */
    int x = a, y = b;
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("Swap a,b using XOR: a=%d b=%d\n", x, y);

    return 0;
}
