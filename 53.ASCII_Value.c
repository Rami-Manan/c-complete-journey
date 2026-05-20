include <stdio.h>   /* Standard I/O library for printf() */

int main()           /* Main function - entry point of the program */
{
    int ch;          /* Declare loop variable as int (better compatibility with older compilers like Turbo C) */

    /* Loop through ASCII values of 'A' (65) to 'Z' (90) */
    for(ch = 'A'; ch <= 'Z'; ch++)
    {
        printf("%c = %d\n", ch, ch);   /* %c prints character, %d prints its ASCII value */
    }

    return 0;   /* Return 0 = program executed successfully */
}
