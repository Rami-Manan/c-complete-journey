#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()
{
    int n, temp, rev = 0;
    printf("Enter a number : ");
    scanf("%d", &n);    /* Take number input from user. */

    temp = n;   /* Save original number in temp before we start modifying n */

    /*
     * HOW REVERSING WORKS (Palindrome Logic):
     * -----------------------------------------
     * To check palindrome, we reverse the number digit by digit.
     * Example: n = 121
     *
     * Step 1: rev = 0*10 + (121 % 10) = 0 + 1 = 1,  n = 121/10 = 12
     * Step 2: rev = 1*10 + (12  % 10) = 10 + 2 = 12, n = 12/10  = 1
     * Step 3: rev = 12*10 + (1  % 10) = 120 + 1 = 121, n = 1/10 = 0
     * Loop ends because n == 0
     *
     * Reversed number = 121, Original = 121 → PALINDROME!
     */

    do
    {
        rev = rev * 10 + (n % 10);
        /* (n % 10) extracts the LAST digit of n
         * rev * 10 shifts existing digits left to make room
         * Together they build the reversed number one digit at a time */

        n /= 10;
        /* Remove the last digit from n (integer division drops remainder)
         * Example: 121 / 10 = 12 (last digit 1 is gone) */
    }
    while (n != 0);   /* Keep looping until all digits are processed */

    /*
     * PALINDROME CHECK:
     * -----------------
     * Compare the original number (temp) with reversed number (rev)
     * If they are equal → the number reads same forwards & backwards = PALINDROME
     * If not equal     → the number is NOT a palindrome
     *
     * Example Palindromes : 121, 1221, 12321, 1001
     * Example Non-Palindromes : 123, 456, 100, 789
     */

    if (temp == rev)
        printf("Palindrome ✓ (Number reads same forwards and backwards)");
    else
        printf("Not Palindrome ✗ (Number does not read same forwards and backwards)");

    return 0;   /* Program executed successfully */
}
