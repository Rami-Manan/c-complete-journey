#include <stdio.h>

int main()
{
    int arr[] = {3, 6, 9, 12, 15, 18, 21};
    int *start = arr;                /* Pointer to first element */
    int *end   = arr + (sizeof(arr)/sizeof(arr[0]));  /* Pointer past last element */

    /* Pointer subtraction gives number of elements between them. */
    int count = end - start;

    printf("Array  : ");
    int *ptr;
    for(ptr = start; ptr < end; ptr++)
        printf("%d ", *ptr);
    printf("\n");

    printf("Count  : %d\n", count);
    printf("Sum    : ");

    int sum = 0;
    for(ptr = start; ptr < end; ptr++)
        sum += *ptr;

    printf("%d\n", sum);

    return 0;
}
