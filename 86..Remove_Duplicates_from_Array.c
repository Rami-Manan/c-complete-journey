#include <stdio.h>

int main()
{
    int arr[100], result[100];
    int n, i, j, isDuplicate, resultSize = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++)
    {
        isDuplicate = 0;

        /* Check if arr[i] already exists in result[] */
        for(j = 0; j < resultSize; j++)
        {
            if(result[j] == arr[i])
            {
                isDuplicate = 1;
                break;
            }
        }

        if(!isDuplicate)
            result[resultSize++] = arr[i];   /* Add to result if unique */
    }

    printf("After removing duplicates: ");
    for(i = 0; i < resultSize; i++)
        printf("%d ", result[i]);
    printf("\n");

    return 0;
}
