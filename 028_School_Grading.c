#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program execution starts here */
{
    int marks;   /* Declare an integer variable to store marks */

    scanf("%d", &marks);   /* Read marks from the user */

    if(marks >= 90)                 /* If marks are 90 or above. */
        printf("Grade A");          /* Print Grade A */
    else if(marks >= 75)            /* Else if marks are 75 or above */
        printf("Grade B");          /* Print Grade B */
    else if(marks >= 50)            /* Else if marks are 50 or above */
        printf("Grade C");          /* Print Grade C */
    else                            /* If marks are below 50 */
        printf("Fail");             /* Print Fail */

    return 0;   /* Return 0 = program executed successfully */
}
