#include <stdio.h>   /* Standard I/O library for printf() */

int main()
{
    int num = 1;   /* Starting number */

    /* Upper half of the pattern */
    for(int i = 1; i <= 5; i++)
    {
        /* Print increasing numbers */
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }

        printf("\n");   /* Move to next line */
    }

    num--;   /* Adjust value after upper half */

    /* Lower half of the pattern */
    for(int i = 4; i >= 1; i--)
    {
        num = num - i;   /* Set starting value for row */

        /* Print numbers for current row */
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }

        num = num - i;   /* Restore position */

        printf("\n");   /* Move to next line */
    }

    return 0;   /* Program executed successfully */
}
