/*
 * Program     : Search for a Word in a File
 * Description : Reads file line by line, searches for target word
 *               Uses strstr() which returns pointer if substring found
 *               Counts how many lines contain the word
 */

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char line[200], word[50];
    int lineNum = 0, found = 0;

    fp = fopen("diary.txt", "r");

    if(fp == NULL)
    {
        printf("File not found!\n");
        return 1;
    }

    printf("Enter word to search: ");
    scanf("%s", word);

    while(fgets(line, 200, fp) != NULL)
    {
        lineNum++;

        if(strstr(line, word) != NULL)   /* strstr returns NULL if not found */
        {
            printf("Found \"%s\" on line %d: %s", word, lineNum, line);
            found++;
        }
    }

    if(!found)
        printf("\"%s\" not found in file\n", word);
    else
        printf("\nTotal occurrences: %d\n", found);

    fclose(fp);
    return 0;
}
