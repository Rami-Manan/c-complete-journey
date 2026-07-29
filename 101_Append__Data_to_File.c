/*Definition

File I/O means reading data from a file or writing data to a file on disk so that data 
is permanently saved even after the program ends

  File Opening Modes:
Mode   Meaning
"r"    Read only (file must exist)
"w"    Write only (creates/overwrites)
"a"    Append (add to end of file)
"rb"   Read binary
"wb"   Write binary
"ab"   Append binary

  Key Functions:
Function                     Purpose
fopen(name, mode)            Open a file
fclose(fp)                   Close a file
fprintf(fp, ...)             Write formatted text
fscanf(fp, ...)              Read formatted text
fgets(str, n, fp)            Read a line
fputc(ch, fp)                Write a character
fgetc(fp)                    Read a character
fread(&s, size, 1, fp)       Read binary data
fwrite(&s, size, 1, fp)      Write binary data

FILE *fp;                        /* Step 1: Declare file pointer */
 // fp = fopen("file.txt", "w");     /* Step 2: Open file */
// if(fp == NULL) { /* handle error */ }
// fprintf(fp, "Hello");            /* Step 3: Read or Write */
// fclose(fp);                      /* Step 4: Always close! */


/* Why use File I/O?

Data is permanent — survives after program ends
Used in real systems: student records, banking, hospitals
Foundation of all database-like programs in C. */

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
