#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()
{
    int n, count = 0;   /* n = input number, count = digit counter (starts at 0) */

    printf("Enter a number: ");   /* Prompt user to enter a number */
    scanf("%d", &n);              /* Read the integer input from user. */

    do {
        n /= 10;    /* Remove the last digit by dividing by 10 */
        count++;    /* Increment digit count by 1 */
    } while (n != 0);   /* Repeat until all digits are processed */

    printf("Number of Digits = %d\n", count);   /* Display the total digit count */

    return 0;   /* Return 0 = program executed successfully */
}
