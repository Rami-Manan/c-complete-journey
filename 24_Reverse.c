/*
 * Program   : Reverse a 4-digit number
 * Author    : Manan Rami
 * Description: Extracts each digit of a 4-digit number 
 *              and recombines them in reverse order.
 */

#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program execution starts here */
{
    int a, d1, d2, d3, d4, rev;  

    printf("Enter a 4-digit number: ");   /* Prompt user for input */
    scanf("%d", &a);                      /* Read integer from user */

    d1 = a % 10;     /* Extract last digit (units place) */
    a = a / 10;      /* Remove last digit */

    d2 = a % 10;     /* Extract next digit (tens place) */
    a = a / 10;      /* Remove digit */

    d3 = a % 10;     /* Extract next digit (hundreds place) */
    a = a / 10;      /* Remove digit */

    d4 = a % 10;     /* Extract first digit (thousands place) */

    rev = d1 * 1000 + d2 * 100 + d3 * 10 + d4;  
    /* Recombine digits in reverse order:
       thousands <- units, hundreds <- tens, etc. */

    printf("Reverse = %d\n", rev);   /* Print the reversed number */

    return 0;   /* Return 0 = program executed successfully */
}
