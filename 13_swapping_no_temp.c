#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program starts here */
{
    int a, b;   /* a, b = numbers to swap */

    printf("Enter value for A : ");   /* Prompt user to enter value for A */
    scanf("%d", &a);                  /* Read and store input in a */

    printf("Enter value for B : ");   /* Prompt user to enter value for B */
    scanf("%d", &b);                  /* Read and store input in b */

    printf("\nBefore Swapping : A = %d, B = %d\n", a, b);   /* Print values before swap */

    /* Swapping Logic without temp variable */
    a = a + b;   /* Step 1 : a now holds sum of both numbers */
    b = a - b;   /* Step 2 : subtract b from sum to get original a */
    a = a - b;   /* Step 3 : subtract new b (original a) to get original b */

    printf("After Swapping  : A = %d, B = %d\n", a, b);   /* Print values after swap */

    return 0;   /* Return 0 = program executed successfully */
}
