#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()
{
    int n, i;   /* n = upper limit entered by user, i = loop counter */
    
    printf("Enter value of N: ");
    scanf("%d", &n);   /* Read the value of N from user */

    /* Validate input - N should be a positive number */
    if (n <= 0)
    {
        printf("Please enter a positive number!\n");
        return 1;   /* Return 1 = program ended with an error */
    }

    printf("Numbers from 1 to %d:\n", n);   /* Print heading */

    /* Loop from 1 to N and print each number */
    for (i = 1; i <= n; i++)
        printf("%d ", i);

    printf("\n");   /* Move to next line after all numbers are printed */

    return 0;   /* Program ended successfully */
}
