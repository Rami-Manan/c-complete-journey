#include <stdio.h>   /* Standard I/O library for printf() */

int main()
{
    char ch = 'a';   /* Starting character */

    /* Outer loop: controls rows from 1 to 5 */
    for(int i = 1; i <= 5; i++)
    {
        /* Inner loop: prints characters in each row */
        for(int j = 1; j <= i; j++)
        {
            printf("%c ", ch);   /* Print current character */
            ch++;                /* Move to next character */
        }

        printf("\n");   /* Move to next line */
    }

    return 0;   /* Program executed successfully */
}
