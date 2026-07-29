#include <stdio.h>

int main()
{
    int n, temp, rem, sum = 0;

    /* Take input from user */
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;   /* Store original number for comparison at the end. */

    /* Loop through each digit of the number */
    for (; n != 0; n /= 10)
    {
        rem = n % 10;   /* Extract the last digit */

        /* Calculate factorial of the extracted digit */
        int fact = 1;
        for (int i = 1; i <= rem; i++)
        {
            fact *= i;   /* fact = 1 * 2 * 3 * ... * rem */
        }

        sum += fact;   /* Add factorial of digit to total sum */
    }

    /* Compare sum of factorials with original number */
    if (temp == sum)
        printf("%d is a Strong Number\n", temp);
    else
        printf("%d is Not a Strong Number\n", temp);

    return 0;   /* Program executed successfully */
}
