#include <stdio.h>

/* Swap two string pointers */
void swapStrings(char **s1, char **s2)
{
    char *temp = *s1;   /* Save address of first string */
    *s1 = *s2;          /* First pointer now points to second string */
    *s2 = temp;         /* Second pointer now points to first string */
}

int main()
{
    char *str1 = "Manan";
    char *str2 = "Ahmedabad";

    printf("Before swap: str1 = %s, str2 = %s\n", str1, str2);

    swapStrings(&str1, &str2);   /* Pass addresses of pointers */

    printf("After  swap: str1 = %s, str2 = %s\n", str1, str2);

    return 0;
}
