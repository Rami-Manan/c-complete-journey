/*
 * Program     : File I/O - All Concepts in One Program
 * Description : Covers all major File I/O concepts:
 *               → Write text to file (fprintf)
 *               → Read text from file (fgets)
 *               → Append to file
 *               → Character by character read (fgetc)
 *               → Count chars, words, lines
 *               → Binary write/read (fwrite/fread)
 *               → Copy file contents
 *               → Search for word in file
 */

#include <stdio.h>
#include <string.h>

#define FILENAME   "student_data.txt"
#define BINFILE    "student_data.bin"
#define COPYFILE   "student_copy.txt"

/* Student structure for binary file demo */
typedef struct
{
    char  name[50];
    int   roll;
    float marks;
} Student;

/* ── Write text data to file ── */
void writeTextFile()
{
    FILE *fp = fopen(FILENAME, "w");
    if(!fp) { printf("Cannot create file!\n"); return; }

    fprintf(fp, "Manan Rami 101 92.5\n");
    fprintf(fp, "Raj Shah   102 78.0\n");
    fprintf(fp, "Priya Patel 103 95.0\n");

    fclose(fp);
    printf("✓ Text written to %s\n", FILENAME);
}

/* ── Read and display text file ── */
void readTextFile()
{
    FILE *fp = fopen(FILENAME, "r");
    char line[100];
    if(!fp) { printf("File not found!\n"); return; }

    printf("\n── File Contents ──\n");
    while(fgets(line, 100, fp) != NULL)
        printf("  %s", line);

    fclose(fp);
}

/* ── Append new record to file ── */
void appendToFile()
{
    FILE *fp = fopen(FILENAME, "a");
    if(!fp) { printf("Cannot open file!\n"); return; }

    fprintf(fp, "Sima Joshi 104 88.5\n");
    fclose(fp);
    printf("\n✓ Record appended\n");
}

/* ── Count chars, words, lines ── */
void countFileStats()
{
    FILE *fp = fopen(FILENAME, "r");
    char ch;
    int chars=0, words=0, lines=0, inWord=0;
    if(!fp) { printf("File not found!\n"); return; }

    while((ch = fgetc(fp)) != EOF)
    {
        chars++;
        if(ch == '\n') { lines++; inWord=0; }
        else if(ch==' ' || ch=='\t') inWord=0;
        else if(!inWord) { words++; inWord=1; }
    }

    fclose(fp);
    printf("\n── File Statistics ──\n");
    printf("  Characters : %d\n", chars);
    printf("  Words      : %d\n", words);
    printf("  Lines      : %d\n", lines);
}

/* ── Search word in file ── */
void searchWord(char *word)
{
    FILE *fp = fopen(FILENAME, "r");
    char line[100];
    int lineNo=0, found=0;
    if(!fp) { printf("File not found!\n"); return; }

    printf("\n── Searching for \"%s\" ──\n", word);
    while(fgets(line, 100, fp) != NULL)
    {
        lineNo++;
        if(strstr(line, word))   /* strstr returns NULL if not found */
        {
            printf("  Found on line %d: %s", lineNo, line);
            found++;
        }
    }

    if(!found) printf("  \"%s\" not found\n", word);
    fclose(fp);
}

/* ── Copy file ── */
void copyFile()
{
    FILE *src  = fopen(FILENAME, "r");
    FILE *dest = fopen(COPYFILE, "w");
    char ch;
    if(!src || !dest) { printf("Error!\n"); return; }

    while((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);
    printf("\n✓ File copied to %s\n", COPYFILE);
}

/* ── Binary write (fwrite) ── */
void writeBinaryFile()
{
    FILE *fp = fopen(BINFILE, "wb");
    if(!fp) { printf("Cannot create binary file!\n"); return; }

    Student students[] = {
        {"Manan", 101, 92.5},
        {"Raj",   102, 78.0},
        {"Priya", 103, 95.0}
    };

    /* Write all 3 structs in one fwrite call */
    fwrite(students, sizeof(Student), 3, fp);
    fclose(fp);
    printf("\n✓ Binary data written to %s\n", BINFILE);
}

/* ── Binary read (fread) ── */
void readBinaryFile()
{
    FILE *fp = fopen(BINFILE, "rb");
    Student s;
    if(!fp) { printf("Binary file not found!\n"); return; }

    printf("\n── Binary File Records ──\n");
    while(fread(&s, sizeof(Student), 1, fp) == 1)
        printf("  %-10s Roll: %d  Marks: %.1f\n", s.name, s.roll, s.marks);

    fclose(fp);
}

int main()
{
    printf("========== FILE I/O - ALL CONCEPTS ==========\n\n");

    writeTextFile();      /* Create and write */
    appendToFile();       /* Append new record */
    readTextFile();       /* Read and display */
    countFileStats();     /* Count chars/words/lines */
    searchWord("Priya");  /* Search word */
    copyFile();           /* Copy to new file */
    writeBinaryFile();    /* Binary write */
    readBinaryFile();     /* Binary read */

    return 0;
}
