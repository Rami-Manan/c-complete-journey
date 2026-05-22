#include <stdio.h>  /* Standard I/O library for printf() and scanf() */

int main()
{
    int n, temp, rem, sum = 0;  /* n = input, temp = backup, rem = digit, sum = cube sum */

    printf("Enter a number: ");
    scanf("%d", &n);            /* Read integer input from user */

    temp = n;                   /* Save original number for final comparison */

    /* Loop through each digit by removing last digit one by one */
    for (; n != 0; n /= 10)
    {
        rem = n % 10;                    /* Extract last digit */
        sum = sum + (rem * rem * rem);   /* Cube the digit and add to sum */
    }

    /* Compare original number with sum of cubes */
    if (temp == sum)
        printf("%d is an Armstrong Number\n", temp);    /* Improved: shows the number too */
    else
        printf("%d is Not an Armstrong Number\n", temp);

    return 0;   /* Program executed successfully */
}
