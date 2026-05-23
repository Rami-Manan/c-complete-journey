#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()
{
    int n, even = 0, odd = 0, digit;   /* n = input number, even/odd = counters, digit = current digit */

    printf("Enter a number: ");
    scanf("%d", &n);   /* Read integer input from user */

    /*  negative numbers give negative remainders in C
       e.g. -123 % 10 = -3, which fails the even check
       So we convert n to positive using abs() logic */
    if(n < 0)
        n = -n;   /* Make negative number positive before processing */

    /* Edge case: if user enters 0, it has one even digit */
    if(n == 0) {
        even = 1;
    } else {
        /* Loop extracts digits one by one from right to left */
        for(; n != 0; n /= 10) {
            digit = n % 10;        /* Extract the last digit */

            if(digit % 2 == 0)     /* Check if digit is even */
                even++;            /* Increment even counter */
            else
                odd++;             /* Increment odd counter */
        }
    }

    printf("Even digits = %d\n", even);   /* Print count of even digits */
    printf("Odd digits  = %d\n", odd);    /* Print count of odd digits */

    return 0;   /* Return 0 = program executed successfully */
}
