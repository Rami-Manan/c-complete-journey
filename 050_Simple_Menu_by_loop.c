#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()
{
    int choice;   /* Variable to store user's menu selection */

    do   /* do-while loop: runs at least once, repeats until user exits */
    {
        /* Display menu options */
        printf("\n1. Hello");
        printf("\n2. Bye");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");

        scanf("%d", &choice);   /* Read user's choice from keyboard */

        /* Respond based on user's choice */
        if (choice == 1)
            printf("Hello!\n");

        else if (choice == 2)
            printf("Bye!\n");

        else if (choice == 3)
            printf("Exiting... Goodbye!\n");   /* Exit message added */

        else
            printf("Invalid choice! Please enter 1, 2, or 3.\n");   /* Handle wrong input */

    } while (choice != 3);   /* Keep looping until user chooses 3 (Exit) */

    return 0;   /* Program ended successfully */
}
