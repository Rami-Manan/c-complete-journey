#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program starts here */
{
    int a, b;   /* Declare two integers for swapping */

    printf("Enter 2 Numbers for swapping : ");   /* Prompt user to enter two numbers */
    scanf("%d %d", &a, &b);                      /* Read and store both inputs at once */

    printf("Before Swapping : A = %d , B = %d\n", a, b);   /* Print values before swap */

    /* Swapping Logic using Multiplication and Division */
    a = a * b;   /* Step 1 : a now holds product of both numbers */
    b = a / b;   /* Step 2 : divide product by b to get original a */
    a = a / b;   /* Step 3 : divide product by new b to get original b */

    printf("After Swapping  : A = %d , B = %d\n", a, b);   /* Print values after swap */

    return 0;   /* Return 0 = program executed successfully */
}

