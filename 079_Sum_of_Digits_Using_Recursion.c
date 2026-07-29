#include <stdio.h>

/* Recursively sum digits of n */
int sumOfDigits(int n)
{
    if(n == 0) return 0;              /* Base case */
    return (n % 10) + sumOfDigits(n / 10);   /* Last digit + recurse. */
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits of %d = %d\n", n, sumOfDigits(n));
    return 0;
}

/*Extracts last digit, adds it, recurses on remaining number
 *               Example: 123 → 1+2+3 = 6*/
