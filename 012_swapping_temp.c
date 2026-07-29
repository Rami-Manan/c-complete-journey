#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program starts here */
{
    int a, b, temp;   /* a, b = numbers to swap, temp = temporary storage */

    printf("Enter value for A : ");   /* Prompt user to enter value for A. */
    scanf("%d", &a);                  /* Read and store input in a */

    printf("Enter value for B : ");   /* Prompt user to enter value for B */
    scanf("%d", &b);                  /* Read and store input in b */

    printf("\nBefore Swapping : A = %d, B = %d\n", a, b);   /* Print values before swap */

    /* Swapping Logic using temp variable */
    temp = a;   /* Step 1 : Store value of a in temp */
    a = b;      /* Step 2 : Assign value of b to a */
    b = temp;   /* Step 3 : Assign value of temp (original a) to b */

    printf("After Swapping  : A = %d, B = %d\n", a, b);   /* Print values after swap */

    return 0;   /* Return 0 = program executed successfully */
}
