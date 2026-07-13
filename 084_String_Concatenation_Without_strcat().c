 /*definition:-
 /* A string is a sequence (array) of characters ending with a special character called the null terminator '\0' which tells C where the string ends.
Syntax:*/
/* char name[20] = "Manan";
/* Stored as: M  a  n  a  n  \0  */
/*            [0][1][2][3][4][5]  */
/* Function    Purpose                 Example
/* strlen(s)       Length of string    strlen("Manan") = 5
/* strcpy(d,s)     Copy string         strcpy(dest, src)
/* strcmp(s1,s2)   Compare strings     returns 0 if equal
/* strcat(s1,s2)   Concatenate         joins two strings   
strrev(s)       Reverse string      strrev("abc") = "cba" */
/* Rule
/* 1. Always declare size 1 more than needed (for '\0')
/* 2. Use strcmp() to compare strings, NOT == operator
3. String ends at '\0' — never forget it */

#include <stdio.h>

/* Append src to dest manually */
void myStrcat(char dest[], char src[])
{
    int i = 0, j = 0;

    /* Move to end of dest */
    while(dest[i] != '\0')
        i++;

    /* Copy src characters starting from end of dest */
    while(src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';   /* Add null terminator */
}

int main()
{
    char s1[100], s2[50];

    printf("Enter first string : ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    myStrcat(s1, s2);
    printf("Concatenated: %s\n", s1);

    return 0;
}
