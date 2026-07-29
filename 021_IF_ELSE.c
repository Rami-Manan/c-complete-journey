#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program starts executing here. */
{
    int age;         /* Variable to store the user's age */

    printf("Enter your AGE : ");   /* Prompt user to enter age */
    scanf("%d", &age);             /* Read integer input and store in age */

    if (age >= 18)                 /* Check if age is 18 or above */
    {
        printf("You can vote!\n");       /* Eligible to vote */
    }
    else                           /* If age is below 18 */
    {
        printf("You cannot vote!\n");    /* Not eligible to vote */
    }

    printf("End of the program\n");   /* \n added for clean output */

    return 0;   /* Return 0 = program ran successfully */
}
