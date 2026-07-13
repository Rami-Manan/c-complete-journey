#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program execution starts here */
{
    int year;   /* Declare an integer variable to store the year */

    scanf("%d", &year);   /* Read year from the user */

    if (year % 4 == 0)          /* If year is divisible by 4 */
        printf("Leap Year");    /* Print Leap Year */
    else                        /* Otherwise */
        printf("Not Leap Year");/* Print Not Leap Year */

    return 0;   /* Return 0 = program executed successfully */
}
