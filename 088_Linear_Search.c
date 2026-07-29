#include <stdio.h>

int main()
{
    int arr[100], n, target, i;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            printf("Found %d at index %d\n", target, i);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("%d not found in array\n", target);

    return 0;
    
}
