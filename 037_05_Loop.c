#include <stdio.h>   /* Standard I/O library for printf() */

int main()           /* Main function - entry point of the program */
{
    char ch = 'A';   /* Variable to store uppercase letters, starting from 'A' */
    char cp = 'a';   /* Variable to store lowercase letters, starting from 'a' */

    /* Loop runs until both uppercase and lowercase alphabets are exhausted. */
    while (ch <= 'Z' && cp <= 'z')
    {
        printf(" %c%c ", ch, cp);   /* Print uppercase and lowercase letter side by side */
        ch++;   /* Move to next uppercase letter */
        cp++;   /* Move to next lowercase letter */
    }

    return 0;   /* Return 0 = program ran successfully */
}
