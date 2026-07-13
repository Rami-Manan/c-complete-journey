#include <stdio.h>   /* Standard I/O library for printf() and scanf() */

int main()           /* Main function - program execution starts here */
{
    int a, b;        /* Variables to store numbers */
    char ch;         /* Variable to store operator */

    /* Ask user to select an operator */
    printf("Select any of these (+, -, *, /, %): ");
    scanf(" %c", &ch);   /* Read operator from user 
                            (space before %c skips whitespace/newline) */

    /* Ask user to enter two numbers */
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);   /* Read two integers from user */

    /* Switch statement to perform operation based on operator */
    switch(ch)
    {
        case '+':   /* If operator is + */
            printf("Addition = %d\n", a + b);
            break;

        case '-':   /* If operator is - */
            printf("Subtraction = %d\n", a - b);
            break;

        case '*':   /* If operator is * */
            printf("Multiplication = %d\n", a * b);
            break;

        case '/':   /* If operator is / */
           
                printf("Division = %d\n", a / b);
            
            break;

        case '%':   /* If operator is % */
            
                printf("Modulo = %d\n", a % b);
           
            break;

        default:    /* If operator is not one of +, -, *, /, % */
            printf("Invalid operator!\n");
            break;
    }

    return 0;   /* Return 0 = program executed successfully */
}

