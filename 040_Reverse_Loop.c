#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program starts here */
{
    int n, rev = 0;  /* n = input number, rev = stores reversed number (initialized to 0) */

    /* Take input from user */
    printf("Enter a number: ");
    scanf("%d", &n);  /* Read integer from user, & gives address of n */

    /* Loop until all digits are extracted. */
    while (n != 0)
    {
        rev = rev * 10 + (n % 10);  /* Extract last digit and add to rev */
        
        n = n / 10;   /* Remove last digit from n */
    }

    /* Print the final reversed number */
    printf("Reversed number = %d\n", rev);  /* \n added for clean output */

    return 0;   /* 0 = program executed successfully */
}
