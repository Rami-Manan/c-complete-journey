#include <stdio.h>

/* Count zeros by checking each digit recursively */
int countZeros(int n)
{
    if(n == 0) return 0;                        /* Base case */

    int digit = n % 10;                         /* Extract last digit */
    int rest  = countZeros(n / 10);             /* Recurse on remaining digits */

    return (digit == 0) ? rest + 1 : rest;      /* Add 1 if digit is zero */
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Number of zeros in %d = %d\n", n, countZeros(n));

    return 0;
}
