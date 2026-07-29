// Definition:

// A pointer is a variable that stores the memory address of another variable instead of storing a direct value.

// Syntax:
// int  a   = 10;     /* Normal variable — stores value */
// int *ptr = &a;     /* Pointer — stores ADDRESS of a */

/* & = address-of operator → gives address */
/* * = dereference operator → gives value at address. */

// Visual:
// Variable a:   [ 10 ]  at address 1000
// Pointer ptr:  [1000]  at address 2000
//                 ↑
//        stores address of a

#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n     = 5;
    int *ptr  = arr + (n - 1);   /* Point to last element */
    int i;

    printf("Array in reverse using pointer:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", *ptr);   /* Print value at current pointer position */
        ptr--;                 /* Move pointer backward */
    }

    printf("\n");
    return 0;
}
