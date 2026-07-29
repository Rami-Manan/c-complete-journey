#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i;
    char **names;       /* Array of string pointers. */
    char temp[100];     /* Temporary input buffer */

    printf("How many names? ");
    scanf("%d", &n);
    getchar();          /* Consume leftover newline */

    /* Allocate array of n string pointers */
    names = (char **)malloc(n * sizeof(char *));
    if(names == NULL) { printf("Allocation failed!\n"); return 1; }

    for(i = 0; i < n; i++)
    {
        printf("Enter name %d: ", i+1);
        fgets(temp, 100, stdin);
        temp[strcspn(temp, "\n")] = '\0';   /* Remove trailing newline */

        /* Allocate exact memory for this name */
        names[i] = (char *)malloc((strlen(temp) + 1) * sizeof(char));
        strcpy(names[i], temp);
    }

    printf("\nStored Names:\n");
    for(i = 0; i < n; i++)
        printf("%d. %s\n", i+1, names[i]);

    /* Free each name, then free the array */
    for(i = 0; i < n; i++)
        free(names[i]);
    free(names);

    return 0;
}
