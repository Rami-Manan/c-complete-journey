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
