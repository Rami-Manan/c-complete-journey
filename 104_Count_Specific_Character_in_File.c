#include <stdio.h>

int main()
{
    FILE *fp;
    char target, ch;
    int count = 0;

    fp = fopen("diary.txt", "r");

    if(fp == NULL)
    {
        printf("File not found!\n");
        return 1;
    }

    printf("Enter character to count: ");
    scanf(" %c", &target);   /* Space before %c skips whitespace. */

    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == target)
            count++;
    }

    fclose(fp);

    printf("'%c' appears %d time(s) in the file\n", target, count);

    return 0;
}
