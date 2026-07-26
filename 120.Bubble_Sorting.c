/*
 * Program     : Bubble Sort
 * Description : Compare adjacent elements, swap if wrong order
 *               Largest element "bubbles" to end after each pass
 *               Time Complexity  : O(n²)
 *               Space Complexity : O(1)
 *               Best Case        : O(n) — already sorted
 */

#include <stdio.h>

/* Print array elements */
void printArray(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

/* Bubble Sort function */
void bubbleSort(int arr[], int n)
{
    int i, j, temp, swapped;

    for(i = 0; i < n-1; i++)          /* n-1 passes needed */
    {
        swapped = 0;                   /* Reset swap flag each pass */

        for(j = 0; j < n-1-i; j++)   /* Last i elements already sorted */
        {
            if(arr[j] > arr[j+1])     /* If left > right → swap */
            {
                temp       = arr[j];
                arr[j]     = arr[j+1];
                arr[j+1]   = temp;
                swapped    = 1;        /* Mark that swap happened */
            }
        }

        /* Show array after each pass */
        printf("Pass %d : ", i+1);
        printArray(arr, n);

        if(swapped == 0)               /* No swaps = already sorted */
        {
            printf("Array already sorted — stopping early!\n");
            break;
        }
    }
}

int main()
{
    int arr[] = {64, 25, 12, 90, 45};
    int n     = 5;

    printf("========== BUBBLE SORT ==========\n\n");
    printf("Original : "); printArray(arr, n);
    printf("\n");

    bubbleSort(arr, n);

    printf("\nSorted   : "); printArray(arr, n);

    printf("\n── How it works ──\n");
    printf("Step 1: Compare arr[0] and arr[1], swap if arr[0] > arr[1]\n");
    printf("Step 2: Compare arr[1] and arr[2], swap if arr[1] > arr[2]\n");
    printf("Step 3: Continue until end of unsorted portion\n");
    printf("Step 4: After each pass, largest element is at correct position\n");

    return 0;
}
