#include <stdio.h>

/* Recursively search for target in arr[low..high] */
int binarySearch(int arr[], int low, int high, int target)
{
    if(low > high) return -1;                  /* Base case: not found */

    int mid = (low + high) / 2;               /* Find middle index */

    if(arr[mid] == target) return mid;         /* Found at mid */
    else if(arr[mid] > target)
        return binarySearch(arr, low, mid-1, target);   /* Search left half */
    else
        return binarySearch(arr, mid+1, high, target);  /* Search right half */
}

int main()
{
    int arr[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100};
    int n     = 20;
    int target;

    printf("Array: 5 10 15 20 25 30 35 40 45 50 55 60 65 70 75 80 85 90 95 100}\n");
    printf("Enter number to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, 0, n-1, target);

    if(result != -1)
        printf("Found at index %d\n", result);
    else
        printf("%d not found\n", target);

    return 0;
}
