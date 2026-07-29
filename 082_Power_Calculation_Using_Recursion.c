#include <stdio.h>

/* Recursively compute base raised to exponent */
long long power(int base, int exp)
{
    if(exp == 0) return 1;                    /* Base case: x^0 = 1 */
    if(exp < 0)  return 0;                    /* Negative exp not handled here. */
    return base * power(base, exp - 1);       /* Recursive case */
}

int main()
{
    int base, exp;

    printf("Enter base     : ");
    scanf("%d", &base);
    printf("Enter exponent : ");
    scanf("%d", &exp);

    printf("%d^%d = %lld\n", base, exp, power(base, exp));

    return 0;
}
