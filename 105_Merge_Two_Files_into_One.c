#include <stdio.h>

int main()
{
    FILE *f1, *f2, *merged;
    char ch;

    /* Open both source files for reading */
    f1 = fopen("diary.txt",  "r");
    f2 = fopen("output.txt", "r");

    if(f1 == NULL || f2 == NULL)
    {
        printf("One or both source files not found!\n");
        return 1;
    }

    merged = fopen("merged.txt", "w");   /* Output file */

    if(merged == NULL)
    {
        printf("Cannot create merged file!\n");
        return 1;
    }

    /* Copy f1 content */
    fprintf(merged, "=== File 1 ===\n");
    while((ch = fgetc(f1)) != EOF)
        fputc(ch, merged);

    /* Copy f2 content */
    fprintf(merged, "\n=== File 2 ===\n");
    while((ch = fgetc(f2)) != EOF)
        fputc(ch, merged);

    fclose(f1);
    fclose(f2);
    fclose(merged);

    printf("Files merged into merged.txt\n");

    return 0;
}
