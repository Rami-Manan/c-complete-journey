#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program execution starts here */
{
    int a, b, ch;    /* Variables to store numbers and choice */

    /* Ask user to select an operator */
    printf("Enter your choice (1-5):\n");
    scanf("%d", &ch);   /* Read choice as integer */

    /* Ask user to enter two numbers */
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);   /* Read two integers from user. */

    /* Switch statement to perform operation based on choice */
    switch(ch)
    {
        case 1:   /* Addition */
            printf("Addition = %d\n", a + b);
            break;

        case 2:   /* Subtraction */
            printf("Subtraction = %d\n", a - b);
            break;

        case 3:   /* Multiplication */
            printf("Multiplication = %d\n", a * b);
            break;

        case 4:   /* Division */
            if (b != 0)   /* Prevent division by zero */
                printf("Division = %d\n", a / b);
            else
                printf("Error: Division by zero!\n");
            break;

        case 5:   /* Modulo */
            if (b != 0)   /* Prevent modulo by zero */
                printf("Modulo = %d\n", a % b);
            else
                printf("Error: Modulo by zero!\n");
            break;

        default:    /* Invalid choice */
            printf("Invalid choice!\n");
            break;
    }

    return 0;   /* Return 0 = program executed successfully */
}
