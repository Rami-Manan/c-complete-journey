#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int size     = 2;    /* Start small. */
    int count    = 0;
    int input;

    arr = (int *)malloc(size * sizeof(int));
    if(arr == NULL) { printf("Allocation failed!\n"); return 1; }

    printf("Enter numbers (-1 to stop):\n");

    while(1)
    {
        scanf("%d", &input);
        if(input == -1) break;

        /* If array is full, double its size */
        if(count == size)
        {
            size *= 2;
            arr = (int *)realloc(arr, size * sizeof(int));

            if(arr == NULL) { printf("Realloc failed!\n"); return 1; }

            printf("[Array expanded to size %d]\n", size);
        }

        arr[count++] = input;   /* Add element */
    }

    printf("Final Array (%d elements): ", count);
    int i;
    for(i = 0; i < count; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
