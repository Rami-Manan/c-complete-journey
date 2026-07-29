#include <stdio.h>   /* Standard I/O library for printf() */

int main()
{
    /* Outer loop: controls rows from e to a */
    for(char i = 'e'; i >= 'a'; i--)
    {
        /* Inner loop: prints characters from a to current character */
        for(char j = 'a'; j <= i; j++)
        {
            printf("%c ", j);   /* Print current character. */
        }

        printf("\n");   /* Move to next line */
    }

    return 0;   /* Program executed successfully */
}
