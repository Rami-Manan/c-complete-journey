/* What is Armstrong :- A number is Armstrong if sum of cubes of digits = number
 *               Example: 153 = 1^3 + 5^3 + 3^3 = 153
 */

#include <stdio.h>

/* Returns 1 if Armstrong, 0 if not */
int isArmstrong(int n)
{
    int original = n;
    int sum = 0, digit;

    while(n != 0)
    {
        digit = n % 10;        /* Extract last digit */
        sum += digit * digit * digit;   /* Cube it and add */
        n /= 10;               /* Remove last digit */
    }

    return (sum == original);   /* Compare with original */
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isArmstrong(n))
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is NOT an Armstrong number\n", n);

    return 0;
}
