#include <stdio.h>

int main()
{
    /* Array of 5 string pointers — each points to a different string */
    char *languages[] = {
        "C",
        "Python",
        "Java",
        "JavaScript",
        "Rust"
    };

    int n = 5, i;

    printf("Programming Languages:\n");
    for(i = 0; i < n; i++)
        printf("%d. %s\n", i+1, languages[i]);   /* languages[i] is a pointer */

    /* Also print using pointer arithmetic */
    printf("\nUsing pointer arithmetic:\n");
    for(i = 0; i < n; i++)
        printf("%s\n", *(languages + i));   /* *(arr+i) same as arr[i] */

    return 0;
}
