#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program starts here */
{
    int a;           /* Variable to store the user's input number */

    printf("Enter a value: ");   /* Prompt user to enter a number */
    scanf("%d", &a);             /* Read integer input and store in variable 'a' */

    if (a > 0)                   /* Check if the number is greater than zero */
    {
        printf("Positive\n");    /* Print "Positive" if condition is true */
    }
    else                         /* If number is not greater than zero */
    {
        printf("Negative\n");    /* Print "Negative" if condition is false */
    }

    return 0;   /* Return 0 = program executed successfully */
}
