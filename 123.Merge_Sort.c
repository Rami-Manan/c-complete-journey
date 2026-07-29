/*
 * Program     : Merge Sort
 * Description : Divide array into two halves recursively
 *               Sort each half, then merge both sorted halves
 *               Classic Divide and Conquer algorithm
 *               Time Complexity  : O(n log n) always
 *               Space Complexity : O(n) — needs extra arrays
 *               Most consistent sorting algorithm
 */

#include <stdio.h>

int steps = 0;   /* Track merge steps for display */

/* Print array elements */
void printArray(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

/* ── Merge two sorted halves into one sorted array ── */
void merge(int arr[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;   /* Size of left half */
    int n2 = right - mid;       /* Size of right half */

    /* Temporary arrays to hold two halves */
    int L[50], R[50];

    /* Copy left half into L[] */
    for(i = 0; i < n1; i++)
        L[i] = arr[left + i];

    /* Copy right half into R[] */
    for(j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    /* Merge L[] and R[] back into arr[] in sorted order */
    i = 0;      /* Index for L[] */
    j = 0;      /* Index for R[] */
    k = left;   /* Index for arr[] */

    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
            arr[k++] = L[i++];   /* Take from left */
        else
            arr[k++] = R[j++];   /* Take from right */
    }

    /* Copy any remaining elements of L[] */
    while(i < n1) arr[k++] = L[i++];

    /* Copy any remaining elements of R[] */
    while(j < n2) arr[k++] = R[j++];

    /* Show array after each merge */
    steps++;
    printf("Merge %d  : ", steps);
    printArray(arr, right - left + 1);  /* Print merged portion size */
}

/* ── Recursively divide and sort ── */
void mergeSort(int arr[], int left, int right)
{
    if(left >= right) return;   /* Base case: single element */

    int mid = (left + right) / 2;   /* Find middle point */

    printf("Dividing : left=%d mid=%d right=%d\n", left, mid, right);

    mergeSort(arr, left,  mid);    /* Sort left half  */
    mergeSort(arr, mid+1, right);  /* Sort right half */
    merge(arr, left, mid, right);  /* Merge both halves */
}

int main()
{
    int arr[] = {64, 25, 12, 90, 45};
    int n     = 5;

    printf("========== MERGE SORT ==========\n\n");
    printf("Original : "); printArray(arr, n);
    printf("\n");

    mergeSort(arr, 0, n-1);

    printf("\nSorted   : "); printArray(arr, n);

    printf("\n── How it works ──\n");
    printf("Step 1: Divide array into two halves\n");
    printf("Step 2: Recursively divide until single elements remain\n");
    printf("Step 3: Single elements are trivially sorted\n");
    printf("Step 4: Merge pairs of sorted subarrays\n");
    printf("Step 5: Keep merging until full array is sorted\n");
    printf("Key   : Dividing takes O(log n), merging takes O(n)\n");
    printf("Total : O(n log n)\n");

    return 0;
}
