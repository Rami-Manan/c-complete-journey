#include <stdio.h>

/* Returns pointer to the larger of two numbers. */
int* findLarger(int *a, int *b)
{
    if(*a > *b)
        return a;   /* Return address of larger value */
    else
        return b;
}

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    int *larger = findLarger(&x, &y);   /* Get pointer to larger */

    printf("Larger value = %d\n", *larger);   /* Dereference to get value */

    return 0;
}
