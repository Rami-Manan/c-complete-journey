/*
 * Program     : Append Data to File
 * Description : "a" mode adds to END of file without deleting existing data
 *               "w" mode would overwrite — "a" mode is safe for adding logs
 *               Real use: log files, diary entries, transaction records
 */

#include <stdio.h>

int main()
{
    FILE *fp;
    char text[200];

    fp = fopen("diary.txt", "a");   /* Append mode — keeps existing content */

    if(fp == NULL)
    {
        printf("Cannot open file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    getchar();                      /* Clear input buffer */
    fgets(text, 200, stdin);

    fprintf(fp, "%s", text);        /* Append to end of file */
    fclose(fp);

    printf("Text appended to diary.txt\n");

    return 0;
}
