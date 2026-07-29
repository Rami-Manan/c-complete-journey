#include <stdio.h>

/* Returns 1 if prime, 0 if not prime */
int isPrime(int n)
{
    int i;

    if(n <= 1) return 0;   /* 0 and 1 are not prime. */

    for(i = 2; i * i <= n; i++)   /* Check divisors up to sqrt(n) */
    {
        if(n % i == 0)
            return 0;   /* Divisible = not prime */
    }
    return 1;   /* No divisor found = prime */
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPrime(n))
        printf("%d is a Prime number\n", n);
    else
        printf("%d is NOT a Prime number\n", n);

    return 0;
}
