/*
 * Program     : Selection Sort
 * Description : Find minimum element from unsorted part
 *               Place it at the beginning of unsorted part
 *               Divides array into sorted and unsorted sections
 *               Time Complexity  : O(n²) always
 *               Space Complexity : O(1)
 *               Makes minimum number of swaps — only n-1 swaps
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

/* Selection Sort function */
void selectionSort(int arr[], int n)
{
    int i, j, minIdx, temp;

    for(i = 0; i < n-1; i++)
    {
        minIdx = i;   /* Assume first unsorted element is minimum */

        /* Find actual minimum in unsorted portion */
        for(j = i+1; j < n; j++)
        {
            if(arr[j] < arr[minIdx])
                minIdx = j;   /* Update index of minimum */
        }

        /* Swap minimum with first unsorted position */
        if(minIdx != i)   /* Swap only if minimum is not already in place */
        {
            temp         = arr[i];
            arr[i]       = arr[minIdx];
            arr[minIdx]  = temp;
        }

        /* Show array after each pass */
        printf("Pass %d : ", i+1);
        printf("(min=%d placed at index %d) → ", arr[i], i);
        printArray(arr, n);
    }
}

int main()
{
    int arr[] = {64, 25, 12, 90, 45};
    int n     = 5;

    printf("========== SELECTION SORT ==========\n\n");
    printf("Original : "); printArray(arr, n);
    printf("\n");

    selectionSort(arr, n);

    printf("\nSorted   : "); printArray(arr, n);

    printf("\n── How it works ──\n");
    printf("Step 1: Find minimum element in entire array\n");
    printf("Step 2: Swap it with element at position 0\n");
    printf("Step 3: Find minimum in remaining unsorted portion\n");
    printf("Step 4: Swap with next unsorted position\n");
    printf("Step 5: Repeat until array is sorted\n");

    return 0;
}
