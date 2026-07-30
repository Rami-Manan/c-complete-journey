/*
 * Program     : Quick Sort
 * Description : Choose a pivot element
 *               Partition array so all elements less than pivot
 *               go to left, greater go to right
 *               Recursively sort left and right partitions
 *               Time Complexity  : O(n log n) avg | O(n²) worst
 *               Space Complexity : O(log n) recursive stack
 *               Fastest sorting algorithm in practice
 */

#include <stdio.h>

int pass = 0;   /* Track partitioning steps */

/* Print array elements */
void printArray(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

/* Swap two elements */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* ── Partition array around pivot ──
   Choose last element as pivot
   Place pivot at its correct sorted position
   All elements < pivot go LEFT
   All elements > pivot go RIGHT
   Return final position of pivot
*/
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];   /* Choose last element as pivot */
    int i     = low - 1;    /* i points to last element smaller than pivot */
    int j;

    printf("Pass %d  : pivot=%d → ", ++pass, pivot);

    for(j = low; j < high; j++)
    {
        if(arr[j] <= pivot)   /* If current element <= pivot */
        {
            i++;              /* Expand smaller-elements zone */
            swap(&arr[i], &arr[j]);   /* Bring smaller element left */
        }
    }

    /* Place pivot at its correct position */
    swap(&arr[i+1], &arr[high]);

    printArray(arr, high - low + 2);  /* Show current state */

    return i + 1;   /* Return pivot's final index */
}

/* ── Recursively sort partitions ── */
void quickSort(int arr[], int low, int high)
{
    if(low >= high) return;   /* Base case: 0 or 1 element */

    /* Partition array and get pivot's correct position */
    int pi = partition(arr, low, high);

    quickSort(arr, low,    pi-1);   /* Sort left  of pivot */
    quickSort(arr, pi+1,   high);   /* Sort right of pivot */
}

int main()
{
    int arr[] = {64, 25, 12, 90, 45};
    int n     = 5;

    printf("========== QUICK SORT ==========\n\n");
    printf("Original : "); printArray(arr, n);
    printf("\n");

    quickSort(arr, 0, n-1);

    printf("\nSorted   : "); printArray(arr, n);

    printf("\n── How it works ──\n");
    printf("Step 1: Choose last element as pivot\n");
    printf("Step 2: Scan array left to right\n");
    printf("Step 3: Elements <= pivot go to left partition\n");
    printf("Step 4: Elements >  pivot go to right partition\n");
    printf("Step 5: Place pivot between two partitions\n");
    printf("Step 6: Recursively sort left and right partitions\n");
    printf("Key   : Pivot is always placed at its FINAL sorted position\n");

    return 0;
}
