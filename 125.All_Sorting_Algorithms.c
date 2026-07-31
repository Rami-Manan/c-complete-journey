/*
 * Program     : Sorting Algorithms - All in One
 * Description : Covers all major sorting algorithms:
 *               → Bubble Sort    - compare adjacent, swap
 *               → Selection Sort - find min, place at front
 *               → Insertion Sort - pick element, insert in right place
 *               → Merge Sort     - divide and conquer (recursion)
 *               → Quick Sort     - partition around pivot (recursion)
 */

#include <stdio.h>

/* ── Print array helper ── */
void printArr(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

/* ── Copy array helper ── */
void copyArr(int src[], int dest[], int n)
{
    int i;
    for(i = 0; i < n; i++) dest[i] = src[i];
}

/* ════════════════════════════════════════
   1. BUBBLE SORT
   Compare adjacent elements, swap if wrong
   Largest element "bubbles" to end each pass
   Time: O(n²) | Space: O(1)
   ════════════════════════════════════════ */
void bubbleSort(int arr[], int n)
{
    int i, j, temp, swapped;

    for(i = 0; i < n-1; i++)
    {
        swapped = 0;

        for(j = 0; j < n-1-i; j++)  /* Last i elements already sorted */
        {
            if(arr[j] > arr[j+1])
            {
                temp=arr[j]; arr[j]=arr[j+1]; arr[j+1]=temp;
                swapped = 1;
            }
        }

        if(!swapped) break;  /* Already sorted — stop early */
    }
}

/* ════════════════════════════════════════
   2. SELECTION SORT
   Find minimum element, place at beginning
   Divides array into sorted and unsorted parts
   Time: O(n²) | Space: O(1)
   ════════════════════════════════════════ */
void selectionSort(int arr[], int n)
{
    int i, j, minIdx, temp;

    for(i = 0; i < n-1; i++)
    {
        minIdx = i;   /* Assume first unsorted element is minimum */

        for(j = i+1; j < n; j++)
            if(arr[j] < arr[minIdx])
                minIdx = j;   /* Update minimum index */

        /* Swap minimum with first unsorted position */
        temp=arr[i]; arr[i]=arr[minIdx]; arr[minIdx]=temp;
    }
}

/* ════════════════════════════════════════
   3. INSERTION SORT
   Pick element, insert into correct position
   Works like sorting playing cards in hand
   Time: O(n²) | Space: O(1)
   Best for nearly sorted arrays
   ════════════════════════════════════════ */
void insertionSort(int arr[], int n)
{
    int i, j, key;

    for(i = 1; i < n; i++)
    {
        key = arr[i];   /* Element to be inserted */
        j   = i - 1;

        /* Shift elements greater than key one position right */
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;   /* Insert key at correct position */
    }
}

/* ════════════════════════════════════════
   4. MERGE SORT
   Divide array into halves recursively
   Merge sorted halves back together
   Time: O(n log n) | Space: O(n)
   Best general-purpose sorting algorithm
   ════════════════════════════════════════ */
void merge(int arr[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;   /* Size of left subarray */
    int n2 = right - mid;       /* Size of right subarray */

    /* Temporary arrays */
    int L[50], R[50];

    /* Copy data to temp arrays */
    for(i = 0; i < n1; i++) L[i] = arr[left + i];
    for(j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    /* Merge temp arrays back into arr */
    i = 0; j = 0; k = left;

    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j]) arr[k++] = L[i++];
        else             arr[k++] = R[j++];
    }

    /* Copy remaining elements */
    while(i < n1) arr[k++] = L[i++];
    while(j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right)
{
    if(left >= right) return;   /* Base case: single element */

    int mid = (left + right) / 2;

    mergeSort(arr, left,  mid);    /* Sort left half */
    mergeSort(arr, mid+1, right);  /* Sort right half */
    merge(arr, left, mid, right);  /* Merge sorted halves */
}

/* ════════════════════════════════════════
   5. QUICK SORT
   Choose pivot, partition array around it
   Elements < pivot go left, > pivot go right
   Time: O(n log n) avg | Space: O(log n)
   Fastest in practice for most cases
   ════════════════════════════════════════ */
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];   /* Last element as pivot */
    int i     = low - 1;    /* Index of smaller element */
    int j, temp;

    for(j = low; j < high; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            temp=arr[i]; arr[i]=arr[j]; arr[j]=temp;  /* Swap */
        }
    }

    /* Place pivot in correct position */
    temp=arr[i+1]; arr[i+1]=arr[high]; arr[high]=temp;
    return i + 1;   /* Return pivot index */
}

void quickSort(int arr[], int low, int high)
{
    if(low >= high) return;   /* Base case */

    int pi = partition(arr, low, high);  /* Partition index */

    quickSort(arr, low,    pi-1);  /* Sort left of pivot */
    quickSort(arr, pi+1,   high);  /* Sort right of pivot */
}

int main()
{
    int original[] = {64, 25, 12, 90, 45, 78, 33, 55, 18, 70};
    int n = 10;
    int arr[10];

    printf("Original Array  : "); printArr(original, n);
    printf("\n");

    /* Bubble Sort */
    copyArr(original, arr, n);
    bubbleSort(arr, n);
    printf("Bubble Sort     : "); printArr(arr, n);

    /* Selection Sort */
    copyArr(original, arr, n);
    selectionSort(arr, n);
    printf("Selection Sort  : "); printArr(arr, n);

    /* Insertion Sort */
    copyArr(original, arr, n);
    insertionSort(arr, n);
    printf("Insertion Sort  : "); printArr(arr, n);

    /* Merge Sort */
    copyArr(original, arr, n);
    mergeSort(arr, 0, n-1);
    printf("Merge Sort      : "); printArr(arr, n);

    /* Quick Sort */
    copyArr(original, arr, n);
    quickSort(arr, 0, n-1);
    printf("Quick Sort      : "); printArr(arr, n);

    printf("\n── Comparison ──\n");
    printf("Bubble Sort    : O(n²)     - Simple, slow\n");
    printf("Selection Sort : O(n²)     - Simple, slow\n");
    printf("Insertion Sort : O(n²)     - Good for small/nearly sorted\n");
    printf("Merge Sort     : O(n logn) - Consistent, uses extra space\n");
    printf("Quick Sort     : O(n logn) - Fastest in practice\n");

    return 0;
}
