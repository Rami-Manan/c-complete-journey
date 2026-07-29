#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program execution starts here */
{
    char ch;   /* Declare a character variable to store user input */

    scanf(" %c", &ch);   /* Read a single character from the user.
                            (space before %c skips any whitespace/newline) */

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||   /* Check lowercase vowels */
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')    /* Check uppercase vowels */
        printf("Vowel");       /* Print message if character is a vowel */
    else
        printf("Consonant");   /* Print message if character is not a vowel */

    return 0;   /* Return 0 = program executed successfully */
}
