#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program execution starts here */
{
    int choice;   /* Declare an integer variable to store user input. */

    printf("Enter a number (1-3): ");   /* Prompt user for input */
    scanf("%d", &choice);               /* Read integer from the user */

    switch(choice) {                     /* Switch statement checks value of 'choice' */
        case 1:                          /* If choice == 1 */
            printf("You chose One\n");   /* Print message */
            break;                       /* Exit switch after executing this case */

        case 2:                          /* If choice == 2 */
            printf("You chose Two\n");   /* Print message */
            break;                       /* Exit switch */

        case 3:                          /* If choice == 3 */
            printf("You chose Three\n"); /* Print message */
            break;                       /* Exit switch */

        default:                         /* If choice is not 1, 2, or 3 */
            printf("Invalid choice\n");  /* Print error message */
    }

    return 0;   /* Return 0 = program executed successfully */
}
