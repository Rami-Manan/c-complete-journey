/*
 * Program     : Insertion Sort
 * Description : Pick one element at a time from unsorted part
 *               Insert it into correct position in sorted part
 *               Works exactly like sorting playing cards in hand
 *               Time Complexity  : O(n²) worst | O(n) best
 *               Space Complexity : O(1)
 *               Best for small or nearly sorted arrays
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

/* Insertion Sort function */
void insertionSort(int arr[], int n)
{
    int i, j, key;

    for(i = 1; i < n; i++)
    {
        key = arr[i];   /* Element to be inserted into sorted part */
        j   = i - 1;   /* Start comparing from end of sorted part */

        /* Shift elements greater than key one position to the right */
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];   /* Shift right */
            j--;
        }

        arr[j+1] = key;   /* Insert key at its correct position */

        /* Show array after each insertion */
        printf("Step %d  : ", i);
        printf("(inserted %d) → ", key);
        printArray(arr, n);
    }
}

int main()
{
    int arr[] = {64, 25, 12, 90, 45};
    int n     = 5;

    printf("========== INSERTION SORT ==========\n\n");
    printf("Original : "); printArray(arr, n);
    printf("Step 0   : [64] is already sorted\n");
    printf("\n");

    insertionSort(arr, n);

    printf("\nSorted   : "); printArray(arr, n);

    printf("\n── How it works ──\n");
    printf("Step 1: arr[0] = sorted part, arr[1..n] = unsorted part\n");
    printf("Step 2: Pick first element of unsorted part (key)\n");
    printf("Step 3: Compare key with sorted elements right to left\n");
    printf("Step 4: Shift elements greater than key one step right\n");
    printf("Step 5: Insert key in the gap created\n");
    printf("Step 6: Repeat for all unsorted elements\n");

    return 0;
}
